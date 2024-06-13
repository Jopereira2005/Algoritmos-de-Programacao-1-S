// Escreva um algoritmo que leia um vetor de n elementos inteiros. Ordene o vetor em ordem decrescente e exiba-o.

#include <stdio.h>

int main() {
    int quantidade, tamanho_limite;

    printf("Insira o tamanho do vetor: ");
    scanf("%i", &quantidade);

    float vetor[quantidade], vetor_ord[quantidade], aux;

    printf("Digite os valores do vetor: \n");
    for(int i = 0; i < quantidade; i++) {
        printf("Insira o %i elemento: ", i+1);
        scanf("%f", &vetor[i]);
    }

    for(int i = 0; i < quantidade; i++) {
        vetor_ord[i] = vetor[i];
    }

    for(int i = 0, tamanho_limite = quantidade; i < quantidade; i++, tamanho_limite--) {
        for(int j = 0; j < tamanho_limite - 1; j++) {
            if(vetor_ord[j + 1] > vetor_ord[j]) { // Mude o sinal para mudar de crescente (<) para decrescente (>)
                aux = vetor_ord[j + 1];
                vetor_ord[j + 1] = vetor_ord[j];
                vetor_ord[j] = aux;
            }  
        }
    }

    printf("Vetor: \n");
    for(int i = 0; i < quantidade; i++) {
        printf("[%.1f]", vetor[i]);
    }

    printf("\nVetor ordenado: \n");2
    for(int i = 0; i < quantidade; i++) {
        printf("[%.1f]", vetor_ord[i]);
    }
}