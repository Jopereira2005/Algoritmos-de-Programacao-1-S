// Receber uma temperatura em Fahrenheit e convertê-la para Celsius através da seguinte fórmula: Celsius = (Fahrenheit - 32) / 1.8. Exibir o valor em Celsius.
#include <stdio.h>

int main() {
    float temp_fah, resultado;

    printf("Digite uma temperatura em fahrenheit: \n");
    scanf("%f", &temp_fah);

    resultado = (temp_fah - 32) / 1.8;
    printf("A temperatura convertida e: %.2f celsius", resultado);
}