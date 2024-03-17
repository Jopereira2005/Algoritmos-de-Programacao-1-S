// Desenvolver um programa que recebe a quantidade de alunos que estão cursando o 3º semestre. Para cada aluno receber a quantidade de disciplinas que cursou no 2º semestre e também a nota final relativa a cada disciplina. Calcular e mostrar a média de cada aluno para verificar o aproveitamento do último semestre cursado.

#include <stdio.h>

int main() {
    int qtdd_alunos, qtdd_disciplinas;
    float notas, aux;
    printf("Digite a quantidade de alunos que estao cursando o 3 semestres: ");
    scanf("%i", &qtdd_alunos);

    float media_notas[qtdd_alunos];

    for(int i = 0; i < qtdd_alunos; i++) {
        printf("Digite a quantidade de disciplinas que o %i aluno cursou no 2 semestre: ", i + 1);
        scanf("%i", &qtdd_disciplinas);

        aux = 0;
        for(int j = 0; j < qtdd_disciplinas; j++) {
            printf("Digite a nota final da %i disciplina: ", j + 1);
            scanf("%f", &notas);
            
            aux += notas;
        }
        media_notas[i] = aux/qtdd_disciplinas;
    }

    for(int i = 0; i < qtdd_alunos; i++) {
        printf("\nA media das notas finais do %i aluno foi: %.2f ", i + 1, media_notas[i]);
    }
}