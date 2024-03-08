// Receber um comprimento em metros, convertê-lo para centímetros e mostrar o resultado.
#include <stdio.h>

int main() {
    float num, resultado;
    printf("Digite um comprimento em metro: \n");
    scanf("%f", &num);
    resultado = num*100;
    printf("A conversao em cm e: %.2f cm", resultado);
}