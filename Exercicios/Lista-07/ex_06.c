// Receber 12 números e armazená-los em um vetor. Ao final, exibir a quantidade de números negativos informados. 

#include <stdio.h>

int main() {
    int numeros[12];

    printf("Digite 15 numeros: \n");
    for(int i = 0; i < 12; i++) {
        printf("%i numero: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    printf("Os numeros negativos- dos valores digitados sao: \n");
    for(int i = 0; i < 12; i++) {
        if(numeros[i] < 0) {
            printf(" [%i]", numeros[i]);
        }
    }
}