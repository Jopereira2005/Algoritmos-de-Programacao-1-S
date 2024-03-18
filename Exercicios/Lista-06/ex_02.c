// Criar um programa que exibe todos os números ímpares de 0 a 100 utilizando do-while.

#include <stdio.h>

int main() {
    int i = 0;

    printf("Numeros impares de 0 a 100: \n");

    do {
        if(i % 2 != 0) {
            printf("%i, ", i);
        }
        i++;
    } while(i <= 100);
}