// Criar um programa que exibe todos os números pares de 0 a 100 utilizando while

#include <stdio.h>

int main() {
    int i = 0;

    printf("Numeros pares de 0 a 100: \n");
        
    while(i <= 100) {
        if(i % 2 == 0) {
            printf("%i, ", i);
        }
        i++;
    }
}