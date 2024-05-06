// Faça um programa que recebe uma matriz 3x4 e mostra a média dos elementos de uma linha escolhida pelo usuário. 

#include <stdio.h>

int main() {
    int matriz[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}, linha[4], linha_escolhida;
    float media_linha = 0;

    printf("Escolha uma das linhas(1 a 3): ");
    scanf("%i", &linha_escolhida);

    printf("Linha:\n");
    for(int i = 0; i < 4; i++) {
        linha[i] = matriz[linha_escolhida - 1][i];
        media_linha += matriz[linha_escolhida - 1][i];
    }

    printf("Linha valores:\n");
    for(int i = 0; i < 4; i++) {
        printf("[%2i]", linha[i]);
    }
    printf("\n Soma diagonal: %.1f", media_linha/4);
}