// Receber um número e mostrar sua tabuada do 1 ao 10.

#include <stdio.h>

int main() {
    int i, num;

    printf("Digite um numero:");
    scanf("%i", &num);
    printf("Tabuada: %i\n---------------", num);
    for(i = 0; i < 10; i++) {
        printf("\n%i x %i = %i\n---------------", num, (i + 1), num*(i + 1));
    }
}