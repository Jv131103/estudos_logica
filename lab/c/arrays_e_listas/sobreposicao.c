#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long long start;
    long long end;
} Interval;

// Normaliza um intervalo para start <= end
static inline Interval norm(Interval I) {
    if (I.start <= I.end) return I;
    Interval J = { I.end, I.start };
    return J;
}

// 1) Dois intervalos se sobrepõem? (conta "encostar" como sobreposição)
int intervalos_sobrepostos(Interval A, Interval B) {
    A = norm(A); B = norm(B);
    // sobrepõe se NÃO (A.end < B.start || B.end < A.start)
    return !(A.end < B.start || B.end < A.start);
}

// 2) Algum de l1 sobrepõe algum de l2?
int listas_tem_sobreposicao(const Interval *L1, int n1, const Interval *L2, int n2) {
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (intervalos_sobrepostos(L1[i], L2[j])) return 1;
        }
    }
    return 0;
}

// Comparador para qsort (ordena por start)
int cmp_interval(const void *pa, const void *pb) {
    const Interval *a = (const Interval *)pa;
    const Interval *b = (const Interval *)pb;
    if (a->start < b->start) return -1;
    if (a->start > b->start) return 1;
    if (a->end   < b->end)   return -1;
    if (a->end   > b->end)   return 1;
    return 0;
}

// 3) Mesclar intervalos (merge)
// - intervals: entrada (será copiada/normalizada internamente)
// - n: tamanho da entrada
// - *out: ponteiro de saída alocado com os intervalos mesclados
// - retorna a quantidade de intervalos em *out
int mesclar_intervalos(const Interval *intervals, int n, Interval **out) {
    if (n <= 0) { *out = NULL; return 0; }

    // cópia + normalização
    Interval *v = (Interval *)malloc(sizeof(Interval) * n);
    if (!v) return -1;
    for (int i = 0; i < n; i++) v[i] = norm(intervals[i]);

    // ordena por start
    qsort(v, n, sizeof(Interval), cmp_interval);

    // vetor de saída (máx n)
    Interval *res = (Interval *)malloc(sizeof(Interval) * n);
    if (!res) { free(v); return -1; }

    int m = 0;
    res[m++] = v[0];

    for (int i = 1; i < n; i++) {
        Interval cur = v[i];
        Interval *last = &res[m - 1];

        if (cur.start <= last->end) {
            // sobrepõe → estende o fim
            if (cur.end > last->end) last->end = cur.end;
        } else {
            res[m++] = cur;
        }
    }

    free(v);
    *out = res;
    return m;
}

// --- Exemplo de uso ---
int main(void) {
    // 1) Dois intervalos
    Interval A = {1, 5}, B = {4, 9}, C = {6, 10};
    printf("A x B: %d\n", intervalos_sobrepostos(A, B)); // 1
    printf("A x C: %d\n", intervalos_sobrepostos(A, C)); // 0

    // 2) Listas
    Interval L1[] = {{1,3}, {10,20}};
    Interval L2[] = {{2,5}, {30,40}};
    printf("L1 x L2: %d\n", listas_tem_sobreposicao(L1, 2, L2, 2)); // 1

    // 3) Mesclar
    Interval X[] = {{1,3},{2,6},{8,10},{9,11}};
    Interval *Y = NULL;
    int ny = mesclar_intervalos(X, 4, &Y);
    if (ny >= 0) {
        printf("Mesclados (%d): ", ny);
        for (int i = 0; i < ny; i++) {
            printf("[%lld,%lld]%s", Y[i].start, Y[i].end, (i+1<ny)? " ":"\n");
        }
        free(Y);
    }

    return 0;
}
