// Receber dois números e os apresente em ordem crescente. Utilize apenas a estrutura de decisão if, ou seja, sem o opcional else.

#include <stdio.h>

int main() {
    int num_1, num_2;

    printf("Digite um numero:\n");
    scanf("%i", &num_1);
    printf("Digite outro numero:\n");
    scanf("%i", &num_2);

    if(num_1 < num_2) {
        num_1 = num_2;
    } 
    
    printf("O numero maior numero e %i", num_1);
}