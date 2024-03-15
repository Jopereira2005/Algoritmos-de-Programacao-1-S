// A disciplina Algoritmos e Programação é dividida em duas partes: teoria e prática. Na teoria, são aplicadas duas provas (com nota de 0 a 10 cada) e na prática também. A nota final do semestre é composta pelas médias das provas de teoria e prática, mas a teoria tem peso de 60%, enquanto a prática tem peso de 40%. Receba as notas de um aluno em cada prova teórica e prática e mostre a nota final do semestre.

#include <stdio.h>

int main() {
    float teorica_1, teorica_2, pratica_1, pratica_2, resultado;

    printf("Digite a nota das duas provas praticas: \n");
    scanf("%f %f", &pratica_1, &pratica_2);
    printf("Digite a nota das duas provas teoricas: \n");
    scanf("%f %f", &teorica_1, &teorica_2);

    resultado = (((teorica_1 + teorica_2)/2) * 0.6) + (((pratica_1 + pratica_2)/2) * 0.4);

    printf("A nota final do aluno foi: %.2f", resultado);

}