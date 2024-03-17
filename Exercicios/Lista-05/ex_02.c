// Receber 10 números e, ao final, informar quantos são positivos e quantos são negativos

#include <stdio.h>

int main() {
    int num, positivos = 0, negativos = 0;

    printf("Digite 10 numeros\n");
    for(int i = 1; i <= 10; i++) {
        printf("Digite o %i numero: ", i);
        scanf("%i", &num);

        if(num >= 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    printf("Dos numeros digitados %i sao positivos e %i sao negativos.", positivos, negativos);
}