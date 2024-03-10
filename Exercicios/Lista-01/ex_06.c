// Receber base e altura de um triângulo, calcular sua área e exibir o valor calculado.
#include <stdio.h>

int main() {
    float base, altura, resultado;
    printf("Digite o valor da base do triangulo:\n");
    scanf("%f", &base);
    
    printf("Digite o valor da altura do triangulo:\n");
    scanf("%f", &altura);

    resultado = (base * altura)/2;
    printf("A area do triangulo é: %.2f\n", resultado);
}