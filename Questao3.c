#include <stdio.h>

void metodo3(int vet[], int TAM, int valorOriginal, int valorDestino) {
    if (TAM == 0) {
        return;
    }
    
    if (vet[TAM - 1] == valorOriginal) {
        vet[TAM - 1] = valorDestino;
    }
    
    metodo3(vet, TAM - 1, valorOriginal, valorDestino);
}

int main() {
    int vet[] = {1, 2, 3, 4, 5};
    int TAM = sizeof(vet) / sizeof(vet[0]);
    int valorOriginal = 3;
    int valorDestino = 200;
    int i=0;
    
    printf("Vetor original: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    metodo3(vet, TAM, valorOriginal, valorDestino);
    printf("Vetor modificado: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    
    return 1;
}
