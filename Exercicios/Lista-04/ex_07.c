// Para 30 alunos da turma de Algoritmos e Programação, receber a média de teoria e a média de laboratório, calcular a média final (final = teoria * 0.6 + laboratório * 0.4) e informar se cada um foi bem (final >= 7), razoável (5 <= final < 7) ou mal (final < 5). 

#include <stdio.h>

int main() {
    float teoricas, laboratorio, notas_f[29];

    for(int i = 0; i < 30; i++) {
        printf("Digite as notas do %i aluno.\n", i + 1);
        printf("Digite a nota da teorica: ");
        scanf("%f", &teoricas);
        printf("Digite a nota do laboratorio: ");
        scanf("%f", &laboratorio);

        notas_f[i] = (teoricas * 0.6) + (laboratorio * 0.4);
    }

    for(int i = 0; i < 30; i++) {
        char consideracao[9];
        if(notas_f[i] < 5) {
            sprintf(consideracao, "mal");
        } else if(notas_f[i] >= 5 && notas_f[i] < 7) {
            sprintf(consideracao, "razoavel");
        } else {
            sprintf(consideracao, "bem");
        }

        printf("\nO %i aluno de nota %.2f foi %s.", i + 1, notas_f[i], consideracao);
    }
}