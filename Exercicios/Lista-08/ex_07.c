// Crie um programa que copie para um vetor os elementos de outro em ordem crescente.

int buscabin(int vetor[], int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1;

    while(inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (chave == vetor[meio]) {
            return vetor[meio];
        } else if (chave > vetor[meio]) {
            inicio = meio+1;
        } else {
            fim = meio-1;
        }
    }

    return -1;
}

#include <stdio.h>

int main() {
    int vetor[10] = {12, 31, 13, 43, 675, 55, 45, 55, 88, 22}, vetor_ord[10], aux;

    for(int i = 0; i < 10; i++) {
        vetor_ord[i] = vetor[i];
    }

    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(vetor_ord[i] > vetor_ord[j]) {
                aux = vetor_ord[i];
                vetor_ord[i] = vetor_ord[j];
                vetor_ord[j] = aux;
            }  
        }
    }

    printf("Vetor ordenado: ");
    for(int i = 0; i < 10; i++) {
        printf("[%i]", vetor_ord[i]);
    }
    int num;
    printf("\nQual numero vc quer procurar na lista");
    scanf("%i", &num);

    printf("%i", buscabin(vetor_ord, 10, num));

}