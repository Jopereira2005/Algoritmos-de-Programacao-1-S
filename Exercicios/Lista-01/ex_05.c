// Criar um programa em Linguagem C que receba dois números inteiros e retorne: o valor da divisão e o resto da divisão.
#include <stdio.h>

int main() {
    int num1, num2, valor, resto;

    printf("Digite dois valores: \n");
    scanf("%i", &num1);
    scanf("%i", &num2);

    valor = num1 / num2;
    resto = num1 % num2;
    
    printf("O valor e o resto da divisão dos valores %i e %i sao respectivamente: \n", num1, num2);
    printf("Valor: %i\n", valor);
    printf("Resto: %i", resto);
}