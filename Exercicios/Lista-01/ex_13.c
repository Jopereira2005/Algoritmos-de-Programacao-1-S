// Uma empresa contrata um encanador a R$ 35.00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador e mostre o valor líquido a ser pago, sabendo que são descontados 8% de imposto de renda. 

#include <stdio.h>

int main() {
    int dias;
    float resultado;

    printf("Digite os dias trabalhado pelo encanador: \n");
    scanf("%i", &dias);

    resultado = (35 * dias);
    resultado = resultado - (resultado * 0.08);

    printf("O salario liquido com o imposto de renda descontado fica R$%.2f.", resultado);
}