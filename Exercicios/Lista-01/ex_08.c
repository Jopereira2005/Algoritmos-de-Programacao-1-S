// Calcular e exibir o perímetro de uma circunferência recebendo seu raio. A fórmula para o cálculo é C = 2 * pi * r (utilizar pi = 3.14).
#include <stdio.h>
#define pi 3.14;

int main() {
    float raio, resultado;

    printf("Digite o raio da circunferencia: \n");
    scanf("%f", &raio);
    resultado = 2 * raio * pi;

    printf("O perimetro da circunferencia é: %.2f", resultado);
}