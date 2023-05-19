#include <stdio.h>

void metodo2(int vetor[], int i) {
    if (i < 5) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
        metodo2(vetor, i + 1);
    }
}

int main() {
    int vetor[5];
    metodo2(vetor, 0);
    int i=0;
    
    printf("Valores do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    return 1;
}






