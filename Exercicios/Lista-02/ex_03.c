// Receber numerador e denominador. Calcular e mostrar o resultado da divisão, desde que possível (denominador diferente de zero). Se não for possível dividir, apenas escreva “não existe divisão por zero”.

#include <stdio.h>

int main() {
    float numerador, denominador, resultado;
    
    printf("Digite um numerador: \n");
    scanf("%f", &numerador);

    printf("Digite um denominador: \n");
    scanf("%f", &denominador);

    if(denominador != 0) {
        resultado = (numerador/denominador);
        printf("O resultado e: %.2f.", resultado);
    } else {
        printf("Nao existe divisao por zero.");
    }
}