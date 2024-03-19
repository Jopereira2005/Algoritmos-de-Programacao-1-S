// Receber 10 números e armazená-los em um vetor. Ao final, exibir os números na ordem que foram recebidos

#include <stdio.h>

int main() {
    int numeros[10];

    printf("Digite 10 numeros: \n");
    for(int i = 0; i < 10; i++) {
        printf("%i numero: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    printf("Numeros:");

    for(int i = 0;  i < 10; i++) {
        printf(" [%i]", numeros[i]);
    }
}