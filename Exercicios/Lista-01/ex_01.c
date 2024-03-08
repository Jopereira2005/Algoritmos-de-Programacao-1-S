// Receber um número, calcular seu dobro e exibir o resultado
#include <stdio.h>

int main() {
    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    resultado = numero * 2;
    printf("\nO dobro desse numero é: %i", resultado);
}
