// Faça um programa que leia o tamanho de um vetor A e, em seguida, leia os n elementos do vetor. Considere que o valor máximo de elementos que o vetor A pode armazenar é 100. Por fim, calcule e mostre a média dos elementos de índice par e o produto dos elementos de índice ímpar

#include <stdio.h>

int main() {
    int vetor_A[6] = {1, 2, 3, 4, 5, 6}, tamanho, produto = 1,  j = 0;
    float media = 0;
    tamanho =  sizeof(vetor_A) / sizeof(vetor_A[0]);
    for(int i = 0; i < tamanho; i++) {
        if(vetor_A[i] % 2 == 0) {
            media += vetor_A[i];
            j++;
        } else {
            produto = produto * vetor_A[i];
        }
    }

    printf("A média dos valores pares do vetor A e: %.0f\n", media/j);
    printf("O produto dos valores impares do vetor A e: %i\n", produto);
}