// Receber um intervalo (dois valores) e em seguida um número. Informar se o número está dentro, fora ou nas extremidades do intervalo. Por exemplo, em um intervalo de 1 a 3, 0 está fora, 2 está dentro e 1 está em uma extremidade do intervalo.

#include <stdio.h>

int main() {
    int inicio, fim, numero;

    printf("Digite um intervalo de numeros.\nInicio: ");
    scanf("%i", &inicio);
    printf("Fim: ");
    scanf("%i", &fim);
    printf("Digite um numero: ");
    scanf("%i", &numero);

    if(numero > inicio && numero < fim) {
        printf("O numero esta entre o intervalo informado.");
    } else if(numero == inicio || numero == fim) {
        printf("O numero esta nas extremidades do intervalo informado.");
    } else {
        printf("O numero esta fora do intervalo informado.");
    }
}