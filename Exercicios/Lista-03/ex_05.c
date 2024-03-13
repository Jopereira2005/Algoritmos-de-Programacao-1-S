// Receber três números e mostrar qual é o maior deles.

#include <stdio.h>

int main() {
    int num_1, num_2, num_3, maior;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num_1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num_2);
    printf("Digite o terceiro numero: ");
    scanf("%i", &num_3);

    maior = num_1;
    if (num_2 > maior) {
        maior = num_2;
    } else if (num_3 > maior) {
        maior = num_3;
    }

    printf("O maior numero e: %i.", maior);
}