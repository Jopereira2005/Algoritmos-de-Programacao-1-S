//  Criar um programa de calculadora que vai realizando os cálculos entre dois números enquanto o usuário desejar. Criar um menu de opções conforme mostrado a seguir:
// 1 – Soma
// 2 – Subtração
// 3 – Multiplicação
// 4 – Divisão
// 5 – Sair

#include <stdio.h>

int main() {
    int operadores = 1;
    float num_1, num_2, resultado;



    while(operadores != 5) {
        printf("+---+---------------+\n");
        printf("| 1 | Soma          |\n");
        printf("| 2 | Subtracao     |\n");
        printf("| 3 | Multiplicacao |\n");
        printf("| 4 | Divisao       |\n");
        printf("| 5 | Sair          |\n");
        printf("+---+---------------+\n\n");

        printf("Digite uma das opcoes: ");
        scanf("%i", &operadores);

        if(operadores == 5) {
            printf("\nSaindo... \n");
            return 0;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &num_1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num_2);

        switch (operadores) {
            case 1: 
                resultado = num_1 - num_2;
                break;
            case 2:
                resultado = num_1 - num_2;
                break;
            case 3:
                resultado = num_1 * num_2;
                break;
            case 4:
                resultado = num_1 / num_2;
                break;
            default:
                printf("\nOpcao invalida: \n\n");
                break;
        }

        if (operadores > 0 && operadores < 5) {
            printf("\nO resultado da operacao escolhida e: %.2f\n\n", resultado);
        }
    } 
}