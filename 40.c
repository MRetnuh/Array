#include <stdio.h>

int main() {
    int n = 3; // Cambia el valor de n según el tamaño deseado de las matrices
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Matriz A
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}; // Matriz B
    int result[3][3] = {0}; // Matriz resultado

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Imprimir la matriz resultado
    printf("Matriz Resultado:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
