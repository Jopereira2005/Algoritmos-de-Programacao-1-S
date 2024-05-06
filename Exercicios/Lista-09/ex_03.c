// Faça um programa que recebe uma matriz 5x3 e informa qual é o maior elemento dela e sua posição. 


#include <stdio.h>

int main() {
    int matriz[5][3] = {{24, 69, 6}, {30, 17, 1}, {30, 20, 15}, {5, 12, 78}, {23, 64, 23}}, maior, posicao[2];

    maior = matriz[0][0];
    printf("Matriz: \n");
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3;j++) {
            printf("[%2i]", matriz[i][j]);
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                posicao[0] = i;
                posicao[1] = j;
            }
        }
        printf("\n");
    }
    

    printf("Maior numero: %i \n", maior);
    printf("Posicao: %ix%i \n", posicao[0] + 1, posicao[1] + 1);
}