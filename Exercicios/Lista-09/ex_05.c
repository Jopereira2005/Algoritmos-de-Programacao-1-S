// Faça um programa que recebe uma matriz 4x4 e realiza as seguintes operações:
// - Exibir a soma dos elementos da diagonal principal.
// - Colocar os elementos da diagonal principal em um vetor (uma dimensão).
// - Exibir o vetor.

#include <stdio.h>

int main() {
    int matriz[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}, diagonal[4], soma_diagonal = 0;

    for(int i = 0; i < 4; i++) {
        diagonal[i] = matriz[i][i];
        soma_diagonal += matriz[i][i];
    }

    printf("Diagonal valores:\n");
    for(int i = 0; i < 4; i++) {
        printf("[%2i]", diagonal[i]);
    }
    printf("\nSoma diagonal: %i", soma_diagonal);
}