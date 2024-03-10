// Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no mês. Calcular e exibir o salário dele.
#include <stdio.h>

int main() {
    int qtd_norm, qtd_ext, salario;

    printf("Digite a quantidade de horas normais trabalhadas: \n");
    scanf("%i", &qtd_norm);
    printf("Digite a quantidade de horas extras trabalhadas: \n");
    scanf("%i", &qtd_ext);

    salario = (qtd_norm * 10) + (qtd_ext * 15);
    printf("O salario e de R$%i.", salario);
}