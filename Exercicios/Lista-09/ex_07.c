// Faça um programa que leia uma matriz 3x5 de inteiros, substitua seus elementos negativos por 0 e imprima a matriz original e a modificada. A seguir deverão ser mostrados os valores da soma dos elementos de cada coluna da matriz modificada. 

#include <stdio.h>

int main() {
    int matriz[3][5] = {{1, -2, 3, -4, 5}, {6, -7, 8, -9, 10}, {11, -12, 13, -14, 15}};
    int matriz_modificada[3][5];
    int coluna[5] = {0};

    printf("Matriz Normal:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("[%2i]", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            matriz_modificada[i][j] = matriz[i][j];
        }
    }

    printf("Matriz Modificada:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            if(matriz_modificada[i][j] < 0) {
                matriz_modificada[i][j] = 0;
            }
            printf("[%2i]", matriz_modificada[i][j]);
        }
        printf("\n");
    }

    printf("Soma das colunas:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            coluna[i] += matriz_modificada[j][i];
        }
    }

    for(int i = 0; i < 5; i++) {
        printf("[%2i]", coluna[i]);
    }
}
