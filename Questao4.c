#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void metodo4(int mat[][5], int tam, int lin) {
    for (int col = 0; col < tam; col++) {
        printf("%d ", mat[lin][col]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));

    int tam = 5;
    int mat[5][5];

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            mat[i][j] = rand() % 15;
        }
    }

    int linhaEsc = 2;

    metodo4(mat, tam, linhaEsc);

    return 0;
}
