// Receber dois números e mostrar o maior deles.

#include <stdio.h>

int main() {
    int num_1, num_2;

    printf("Digite um numero:\n");
    scanf("%i", &num_1);
    printf("Digite outro numero:\n");
    scanf("%i", &num_2);

    if(num_1 > num_2) {
        printf("O numero maior numero e %i", num_1);
    } else {
        printf("O numero maior numero e %i", num_2);
    }
}