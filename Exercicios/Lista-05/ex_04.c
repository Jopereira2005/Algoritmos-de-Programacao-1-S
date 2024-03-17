// Receber 10 números e, ao final, informar qual é o maior e o menor deles.

#include <stdio.h>
#include <math.h>

int main() {
    int num, maior = 0, menor = pow(2, 30);

    for(int i = 1; i <= 10; i++) {
        printf("Digite o %i numero: ", i);
        scanf("%i", &num);

        if (num > maior) {
            maior = num;

        } else if(num < menor) {
            menor = num;
        }
    }

    printf("O maior numero e %i e o menor e %i: ", maior, menor);
}
