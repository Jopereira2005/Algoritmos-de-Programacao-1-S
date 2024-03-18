// Receber a nota de um aluno no módulo 1 e no módulo 2 e calcular a média deles. O usuário só pode digitar notas no intervalo de 0 a 10, caso ele digite um valor inválido, deve digitar novamente.

#include <stdio.h>


int main() {
    int i = 0, notas[2];
    float media = 0;

    while(i < 2) {
        do {
            printf("Digite a nota do %i aluno(a nota tem que ser de 0 a 10): ", i + 1);
            scanf("%i", &notas[i]);
        } while(notas[i] < 0 || notas[i] > 10);

        media += notas[i];
        i++;
    }

    printf("A media dos dois alunos foi: %.2f", media/2);
}
