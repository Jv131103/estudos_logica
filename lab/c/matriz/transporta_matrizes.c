#include <stdio.h>

// imprime matriz rows x cols
void print_matrix(int rows, int cols, const int A[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

// T = A^T  (A: rows x cols) -> (T: cols x rows)
void transpose(int rows, int cols,
               const int A[rows][cols],
               int T[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            T[j][i] = A[i][j];
        }
    }
}

int main() {
    // Exemplo 2x3 -> 3x2
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int T[3][2]; // transposta terá 3 linhas e 2 colunas

    printf("Original (2x3):\n");
    print_matrix(2, 3, A);

    transpose(2, 3, A, T);

    printf("\nTransposta (3x2):\n");
    print_matrix(3, 2, T);

    return 0;
}
