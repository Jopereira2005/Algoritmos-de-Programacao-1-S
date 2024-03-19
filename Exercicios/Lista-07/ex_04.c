// Receber 15 números e armazená-los em um vetor. Ao final, exibir o dobro de cada um dos números.

#include <stdio.h>

int main() {
    int numeros[15];

    printf("Digite 15 numeros: \n");
    for(int i = 0; i < 15; i++) {
        printf("%i numero: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    printf("O dobro dos valores digitados: \n");
    for(int i = 0 ; i < 15; i++) {
        printf(" [%i]", numeros[i]*2);
    }
}