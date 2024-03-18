// Receber números enquanto o usuário quiser digitá-los (a cada número informado peça que o usuário digite 1 se quiser informar mais um número ou 2 se quiser parar). No final, exibir:
// - o maior número;
// - a média aritmética dos números.

#include <stdio.h>

int main() {
    int i, num, qtdd_numeros = 0, maior = 0;
    float media;

    do {
        printf("Digite um numero (%i num): ", ++qtdd_numeros);
        scanf("%i", &num);
        printf("Deseja informar mais numeros(1 = sim | 2 = nao)");
        scanf("%i", &i);

        if(num > maior) {
            maior = num;
        }

        media += num;
    } while(i == 1);

    printf("\nO maior numero informado e: %i", maior);
    printf("\nA media dos numeros informados e: %.2f", media/qtdd_numeros);
}