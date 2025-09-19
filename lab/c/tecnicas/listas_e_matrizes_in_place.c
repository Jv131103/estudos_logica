#include <stdio.h>

void soma_listas_normal(int a[], int b[], int c[], int n) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

void soma_listas_inplace(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] += b[i];
    }
}

void inverter_inplace(int arr[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; j--;
    }
}

void soma_matrizes_normal(int M1[2][2], int M2[2][2], int M3[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            M3[i][j] = M1[i][j] + M2[i][j];
        }
    }
}

void soma_matrizes_inplace(int M1[2][2], int M2[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            M1[i][j] += M2[i][j];
        }
    }
}

int main() {
    // Listas
    int A[] = {1, 2, 3};
    int B[] = {10, 20, 30};
    int C[3];
    soma_listas_normal(A, B, C, 3);

    printf("SOMA LISTAS NORMAL: ");
    for (int i = 0; i < 3; i++) printf("%d ", C[i]);
    printf("\n");

    soma_listas_inplace(A, B, 3);
    printf("SOMA LISTAS IN-PLACE: ");
    for (int i = 0; i < 3; i++) printf("%d ", A[i]);
    printf("\n");

    // Inverter
    int L[] = {1, 2, 3, 4};
    inverter_inplace(L, 4);
    printf("INVERTER IN-PLACE: ");
    for (int i = 0; i < 4; i++) printf("%d ", L[i]);
    printf("\n");

    // Matrizes
    int M1[2][2] = {{1, 2}, {3, 4}};
    int M2[2][2] = {{5, 6}, {7, 8}};
    int M3[2][2];
    soma_matrizes_normal(M1, M2, M3);

    printf("SOMA MATRIZES NORMAL:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", M3[i][j]);
        }
        printf("\n");
    }

    soma_matrizes_inplace(M1, M2);
    printf("SOMA MATRIZES IN-PLACE:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", M1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
