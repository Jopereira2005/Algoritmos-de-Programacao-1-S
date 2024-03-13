// Receber três números e dizer se existe algum número repetido entre eles. Em caso afirmativo, mostre qual o número esta repetido

#include <stdio.h>

int main() {
    int num_1, num_2, num_3;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num_1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num_2);
    printf("Digite o terceiro numero: ");
    scanf("%i", &num_3);

    if(num_1 == num_2 || num_1 == num_3) {
        printf("O numero repetido e: %i", num_1);
    } else if (num_2 == num_1 || num_2 == num_3) {
        printf("O numero repetido e: %i", num_2);
    } else if(num_3 == num_1 || num_3 == num_2) {
        printf("O numero repetido e: %i", num_3);
    } else {
        printf("Nenhum numero repetido.");
    }
}