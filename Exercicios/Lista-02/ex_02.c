// Receber um número e verificar se ele esta na faixa de 0 à 9. Se sim, mostre uma mensagem afirmativa, caso contrário mostre uma mensagem indicando que o número não se encontra na faixa.

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: \n");
    scanf("%i", &num);

    if(num >= 0 && num <= 9) {
        printf("Numero entre 0 e 9.");
    } else {
        printf("Numero fora de 0 e 9.");
    }
}