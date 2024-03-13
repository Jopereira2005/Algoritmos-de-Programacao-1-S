// Implementar uma calculadora onde o usuário digita dois números e uma opção, que deve ser 1 para adição, 2 para subtração, 3 para multiplicação e 4 para divisão. Mostrar na tela caso seja informada uma opção inválida.

#include <stdio.h>

int main() {
    int num_1, num_2, operador, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num_1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num_2);
    printf("-----------------\nAdicao = 1 \nSubtracao = 2 \nMultiplicacao = 3 \nDivisao = 4 \nDigite o valor do operador de acordo com a lista: ");
    scanf("%i", &operador);

    if(operador == 1) {
        resultado = num_1 + num_2;
    } else if(operador == 2) {
        resultado = num_1 - num_2;
    } else if(operador == 3) {
        resultado = num_1 * num_2;
    } else if(operador == 4) {
        resultado = num_1 / num_2;
    } else {
        operador = 0; 
        printf("Operador inválido");
    }

    if(operador != 0) {
        printf("O resultado e: %i",  resultado);
    } 
}