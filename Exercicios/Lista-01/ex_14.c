// A disciplina Algoritmos e Programação é dividida em duas partes: teoria e prática. Na teoria, são aplicadas duas provas (com nota de 0 a 10 cada) e na prática também. A nota final do semestre é composta pelas médias das provas de teoria e prática, mas a teoria tem peso de 60%, enquanto a prática tem peso de 40%. Receba as notas de um aluno em cada prova teórica e prática e mostre a nota final do semestre.

#include <stdio.h>

int main() {
    int teorica, pratica;
    float resultado;

    printf("Digite a nota da prova pratica: \n");
    scanf("%i", &pratica);
    printf("Digite a nota da prova teoria: \n");
    scanf("%i", &teorica);

    resultado = ((teorica * 0.6) + (pratica * 0.4));

    printf("A nota final do aluno foi: %.2f", resultado);

}