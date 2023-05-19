#include <stdio.h>

void metodo5(int vet[], int tam, int ini, int fim) {
    if (tam == 0) {
        return;
    }

    if (vet[tam - 1] >= ini && vet[tam - 1] <= fim) {
        metodo5(vet, tam - 1, ini, fim);
        printf("%d ", vet[tam - 1]);
    } else {
        metodo5(vet, tam - 1, ini, fim);
    }
}

int main() {
    int vet[] = {2, 7, 3, 9, 5, 1, 6, 4};
    int tam = sizeof(vet) / sizeof(vet[0]);
    int ini = 3;
    int fim = 6;

    printf("Números na faixa [%d, %d]: ", ini, fim);
    metodo5(vet, tam, ini, fim);
    printf("\n");

    return 0;
}
