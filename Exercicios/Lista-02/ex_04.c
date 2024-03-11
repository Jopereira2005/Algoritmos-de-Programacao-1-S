// Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2. Se a média for maior ou igual a 5 escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5.

#include <stdio.h>

int main() {
    float prova_1, prova_2, resultado;

    printf("Digite a nota da primeira prova:\n");
    scanf("%f", &prova_1);
    printf("Digite a nota da segunda prova:\n");
    scanf("%f", &prova_2);

    resultado = (prova_1 + prova_2) / 2;

    if(resultado >= 5) {
        printf("Aprovado.");
    } else {
        resultado = 5 - resultado;
        printf("Faltou %.1f na media final para ser aprovado nota 5.", resultado);
    }
}