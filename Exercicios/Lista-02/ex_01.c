// Receber um número e informar se ele é negativo ou não é negativo.

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: \n");
    scanf("%i", &num);

    if(num >= 0) {
        printf("Numero positivo");
    } else {
        printf("Numero negativo");
    }
}