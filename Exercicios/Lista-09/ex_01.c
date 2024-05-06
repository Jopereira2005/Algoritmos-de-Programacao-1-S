// Faça um programa que recebe uma matriz 4x3 e mostre a matriz na tela em formato de tabela
#include <stdio.h>

int main() {
    int matriz[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3;j++) {
            printf("[%2i]", matriz[i][j]);
        }
        printf("\n");
    }
}