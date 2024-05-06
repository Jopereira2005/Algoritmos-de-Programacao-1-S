// Faça um programa que recebe uma matriz 3x3 e gera uma segunda matriz com o dobro de cada valor. No final, exiba a segunda matriz na tela

#include <stdio.h>

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, matriz_d[3][3];

    printf("Matriz normal:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%2i]", matriz[i][j]);
            matriz_d[i][j] = matriz[i][j] * 2;
        }
        printf("\n");
    }

    printf("Matriz dobro:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%2i]", matriz_d[i][j]);
        }
        printf("\n");
    }
}