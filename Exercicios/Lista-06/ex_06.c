// Escreva um programa para receber o saldo inicial de uma conta bancária de um cliente. A seguir ler um número indeterminado de pares de valores indicando respectivamente o tipo da operação,sendo: 
// 1.Depósito
// 2.Retirada 
// 3.Fim e também o valor. 
// Quando for informado para o tipo o código 3, o programa deve ser encerrado e impresso o saldo final da conta com as seguintes mensagens: CONTA ZERADA, CONTA ESTOURADA (se o saldo for negativo) ou CONTA PREFERENCIAL (se o saldo for positivo).

#include <stdio.h>

int main() {
    int operacao = 1;
    float valor, saldo, saldo_final;

    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &saldo);
    saldo_final = saldo;

    while(operacao != 3) {
        printf("+---+-----------+\n");
        printf("| 1 | Deposito  |\n");
        printf("| 2 | Retirada  |\n");
        printf("| 3 | Finalizar |\n");
        printf("+---+-----------+\n\n");
        printf("Digite uma das operacoes acima: ");
        scanf("%i", &operacao);

        if(operacao != 3) {
            printf("Digite o valor desejado: ");
            scanf("%f", &valor);

            if(operacao == 1) {
                saldo_final = saldo_final + valor;
            } else if(operacao == 2){
                saldo_final = saldo_final - valor;
            } 
        }
    }

    if(saldo_final == 0) {
        printf("\nCONTA ZERADA\n");
    } else if(saldo_final > 0) {
        printf("\nCONTA PREFERENCIAL\n");
    } else {
        printf("\nCONTA ESTOURADA\n");
    }

    printf("O saldo final foi: %.2f.", saldo_final);
}
