// Define-se como elemento minimax de uma matriz o menor elemento da linha onde se encontra o maior elemento da matriz. Faça um programa que recebe uma matriz 4x4 e mostra qual é seu elemento minimax, bem como sua posição na matriz. 

#include <stdio.h>

int main() {
    int matriz[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int minimax, aux, posicao[2] = {0};

    printf("Matriz:\n");
    aux = matriz[0][0];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
          if(matriz[i][j] > aux) {
            posicao[0] = i;
            aux = matriz[i][j];
          }
            printf("[%2i]", matriz[i][j]);
        }
        printf("\n");
    }

    minimax = matriz[posicao[0]][0];
    for(int i = 0; i < 4; i++) {
        if(matriz[posicao[0]][i] < minimax) {
          posicao[1] = i;
          minimax = matriz[posicao[0]][i];
        } 
    }

    printf("Minimax: %i\n", minimax);
    printf("Posicao: linha %i x coluna %i\n", posicao[0] + 1, posicao[1] + 1); 
}