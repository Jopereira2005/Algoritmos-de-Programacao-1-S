// Receber dois valores, calcular sua média aritmética e exibir o resultado.
#include <stdio.h>

int main() {
    float num1, num2, resultado;

    printf("Digite dois valores: \n");
    scanf("%f\n", &num1);
    scanf("%f", &num2);

    resultado = (num1 + num2)/2;
    printf("A media é: %.2f", resultado);
}