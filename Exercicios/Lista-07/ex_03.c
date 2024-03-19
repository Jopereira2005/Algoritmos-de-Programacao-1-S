// Receber 8 números e armazená-los em um vetor. Ao final, pedir para o usuário escolher uma posição do vetor e exibir o número contido nela.

#include <stdio.h>

int main() {
    int numeros[8], posicao;

    printf("Digite 8 numeros: \n");
    for(int i = 0; i < 8; i++) {
        printf("%i numero: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    printf("Numeros:");

    for(int i = 0 ; i < 8; i++) {
        printf(" [%i]", numeros[i]);
    }

    printf("\nEscolha uma posicao entre 1 e 8: ");
    scanf("%i", &posicao);

    printf("O numero na posicao %i e: %i", posicao, numeros[posicao - 1]);
}

