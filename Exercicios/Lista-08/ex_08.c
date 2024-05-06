// Escreva um algoritmo que leia um vetor de n elementos inteiros. Ordene o vetor em ordem decrescente e exiba-o.

#include <stdio.h>

int main() {
    int vetor[10] = {10, 2, 52, 12, 64, 76, 9, 3, 12, 3}, vetor_ord[10], aux;

    for(int i = 0; i < 10; i++) {
        vetor_ord[i] = vetor[i];
    }

    for(int i = 0, size_limit = 10; i < 10; i++, size_limit--) {
        for(int j = 0; j < size_limit - 1; j++) {
            if(vetor_ord[j + 1] > vetor_ord[j]) {
                aux = vetor_ord[j + 1];
                vetor_ord[j + 1] = vetor_ord[j];
                vetor_ord[j] = aux;
            }  
        }
    }

    printf("Vetor ordenado: ");
    for(int i = 0; i < 10; i++) {
        printf("[%i]", vetor_ord[i]);
    }
}