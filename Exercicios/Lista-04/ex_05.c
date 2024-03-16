// Implementar um programa que exibe todos os números pares contidos entre 10 e 80.

#include <stdio.h>

int main() {
    printf("Os numeros pares contidos entre 10 e 80 sao: \n");
    for(int i = 11; i < 80; i++) {
        if(i % 2 == 0) {
            printf("%i, ", i);
        }
    }
}