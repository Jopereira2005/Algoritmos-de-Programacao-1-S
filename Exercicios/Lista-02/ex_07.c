// Implemente um programa que calcule aumento de salário no ano corrente. Se o salário for de até R$ 1000.00 deve ser calculado o novo salário com aumento de 5%, para um salário maior que R$ 1000.00 o aumento é de 7%.

#include <stdio.h>

int main() {
    float salario, salario_novo;

    printf("Digite um salario:\n");
    scanf("%f", &salario);

    if(salario <= 1000) {
        salario_novo = (salario * 0.05) + salario;
    } else {
        salario_novo = (salario * 0.07) + salario;
    }

    printf("O novo salario agora e: R$%.2f.", salario_novo);
}