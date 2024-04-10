// Escreva um algoritmo em linguagem C que:
// a) leia um vetor A de 12 números reais;
// b) construa e imprima um vetor B formado da seguinte maneira:
//  - os elementos de índice par são os correspondentes de A divididos por 2;
//  - os elementos de índice ímpar são os correspondentes de A multiplicados por 3.

#include <stdio.h>

int main() {
    float vetor_A[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    float vetor_B[12];
    int tamanho = 12;

    for(int i = 0; i < tamanho; i++) {
        if((int)vetor_A[i] % 2 == 0) {
            vetor_B[i] = vetor_A[i] / 2; 
        } else {
            vetor_B[i] = vetor_A[i] / 3;
        }
    }

    printf("Vetor A: \n");
    for(int i = 0; i < tamanho; i++) {
        printf("[%.2f] ", vetor_A[i]);
    }

    printf("\nVetor B: \n");
    for(int i = 0; i < tamanho; i++) {
        printf("[%.2f] ", vetor_B[i]);
    }
}