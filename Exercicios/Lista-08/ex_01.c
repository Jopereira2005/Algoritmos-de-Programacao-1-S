// Dados dois vetores A e B, ambos com 5 elementos, determine o produto escalar desses vetores. 

#include <stdio.h>

int main() {
    int vetor_A[5] = {1, 2, 3, 4, 5}, vetor_B[5] = {6, 7, 8, 9, 10}, tamanho = 5, resultado = 0;

    for(int i = 0; i < tamanho; i++) {
        resultado += vetor_A[i] * vetor_B[i];
    }
    printf("O produto escalar dos vetores A e B e: %i", resultado);
}
