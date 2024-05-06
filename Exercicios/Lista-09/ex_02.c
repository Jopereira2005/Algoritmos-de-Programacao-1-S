// Faça um programa que recebe uma matriz 3x4 e mostra a soma dos seus elementos.

#include <stdio.h>

int main() {
    int matriz[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4;j++) {
            printf("[%2i]", matriz[i][j]);
        }
        printf("\n");
    }
}