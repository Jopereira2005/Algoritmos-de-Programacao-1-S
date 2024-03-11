// Você assina um plano de 50 minutos no celular que custa R$ 50.00 por mês, independente de utilizá-los integralmente ou não. Porém, se você utilizar mais do que 50 minutos, é cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. Receber quantos minutos foram gastos no mês e calcular o valor da conta.

#include <stdio.h>

int main() {
    float min;
    float valor = 50;

    printf("Digite os minutos gastos no mes:\n");
    scanf("%f", &min);

    if(min > 50) {
        valor = valor + ((min - 50) * 1.50);
    }

    printf("O valor gasto no mes e de R$%.2f.", valor);
}