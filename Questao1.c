#include <stdio.h>
#include <stdlib.h>


void exibirDiagP(int mat[][50], int tamanho, int indice) {
    if (indice == tamanho) {
        return;
    }
    printf("%d\n", mat[indice][indice]);
    exibirDiagP(mat, tamanho, indice + 1);
}

int main() {
    srand(time(NULL));
    int tamanho;
	int i=0;
	int j=0;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    int mat[50][50];

    printf("Elementos da matriz:\n");
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            mat[i][j] = rand() % 15;
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal principal: \n");
    exibirDiagP(mat, tamanho, 0);

    return 0;
}
