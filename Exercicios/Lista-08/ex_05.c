// Leia 10 números inteiros e armazene em um vetor A. Crie dois novos vetores A1 e A2. Copie os valores ímpares de A para A1, e os valores pares de A para A2. Note que cada um dos vetores A1 e A2 tem no máximo 10 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos utilizados de A1 e A2. 

#include <stdio.h>

int main() {
    int num, vetor_A[10], vetor_A1[10], vetor_A2[10], tamanho_A1 = 0, tamanho_A2 = 0, i;

    for(i = 0; i < 10; i++) {
        printf("Digite o %i numero: ", i + 1);
        scanf("%i", &vetor_A[i]);
    }

    for(i = 0; i < 10; i++) {
        if(vetor_A[i] % 2 != 0) {
            vetor_A1[tamanho_A1] = vetor_A[i];
            tamanho_A1++;
        } else {
            vetor_A2[tamanho_A2] = vetor_A[i];
            tamanho_A2++;
        }
    }

    printf("Vetor A1: ");
    for(i = 0; i < tamanho_A1; i++) {
        printf("[%i] ", vetor_A1[i]);
    }
    printf("\nVetor A2: ");
    for(i = 0; i < tamanho_A2; i++) {
        printf("[%i] ", vetor_A2[i]);
    }
}
