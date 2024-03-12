// Receber um número e informar se ele é positivo, negativo ou nulo.

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero:\n");
    scanf("%i", &numero);

    if(numero == 0) {
        printf("Numero nulo."); 
    } else if (numero > 0) {
        printf("Numero positivo.");
    } else {
        printf("Numero negativo.");
    }
}