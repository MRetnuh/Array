#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));
    if (argc != 3) {
        printf("Uso: %s <tamaño del tablero> <probabilidad de mina>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    int p = atoi(argv[2]);

    int tablero[n + 2][n + 2];

    for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < n + 2; j++) {
            tablero[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int r = rand() % 100;
            if (r < p) {
                tablero[i][j] = -1;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (tablero[i][j] != -1) {
                if (tablero[i - 1][j - 1] == -1) tablero[i][j]++;
                if (tablero[i - 1][j] == -1) tablero[i][j]++;
                if (tablero[i - 1][j + 1] == -1) tablero[i][j]++;
                if (tablero[i][j - 1] == -1) tablero[i][j]++;
                if (tablero[i][j + 1] == -1) tablero[i][j]++;
                if (tablero[i + 1][j - 1] == -1) tablero[i][j]++;
                if (tablero[i + 1][j] == -1) tablero[i][j]++;
                if (tablero[i + 1][j + 1] == -1) tablero[i][j]++;
            }
            printf("%d ", tablero[i][j]);
        }
        printf("\n");
    }

    return 0;
}
