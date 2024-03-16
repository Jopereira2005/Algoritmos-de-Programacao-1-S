// Implementar um programa que exibe todos os números inteiros de 1 a 1000 em ordem inversa (1000, 999, 998, ..., 3, 2, 1).

#include <stdio.h>

int main() {
    printf("Os numeros inteiros de 1 a 1000 em ordem inversa sao: \n");
    for(int i = 1000; i > 0; i--) {
        printf("%i, ", i);  
    }
}