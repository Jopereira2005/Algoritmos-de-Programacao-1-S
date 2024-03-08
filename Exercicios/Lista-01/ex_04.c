// Receber o ano de nascimento de uma pessoa e mostrar aproximadamente quantos dias de vida ela tem.
#include <stdio.h>

int main() {
    int data_nasc, resultado;

    printf("Digite sua data de nascimento:\n");
    scanf("%i", &data_nasc);
    resultado = (2024 - data_nasc) * 365;
    printf("Voce tem aproximadamente %i dias de vida.", resultado);
}