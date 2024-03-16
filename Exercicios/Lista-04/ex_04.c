// Receber 2 números inteiros e exibir todos os números inteiros existentes entre eles.

#include <stdio.h>

int main() {
    int inicio, fim, i;

    printf("Digite um intervalo de numeros.\nInicio: ");
    scanf("%i", &inicio);
    printf("Fim: ");
    scanf("%i", &fim);

    printf("Os numeros inteiros entre %i e %i: \n", inicio, fim);
    for (i = ++inicio ; i < fim; i++) {
        printf("%i, ", i);
    }
}