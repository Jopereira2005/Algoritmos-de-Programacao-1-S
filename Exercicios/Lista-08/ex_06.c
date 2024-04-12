// Dada uma seqüência de n números reais, determine os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma.

#include <stdio.h>

int main() {
    int tamanho, tamanho_numero, repetidos;

    printf("Digite o tamanho da sequencia: ");
    scanf("%i", &tamanho);

    int sequencia[tamanho], numeros[tamanho], frequencia[tamanho];
    
    for(int i = 0; i < tamanho; i++) {
        frequencia[i] = 0;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o %i numero:  ", i+1);
        scanf("%i", &sequencia[i]);
    }

    for(int i = 0; i < tamanho; i++) {
        repetidos = 0;
        for(int j = 0; j < tamanho_numero; j++) {
            if(sequencia[i] == numeros[j]) {
                repetidos = 1;
                break;
            }
        }

        if(!repetidos) {
            numeros[tamanho_numero] = sequencia[i];
            tamanho_numero++;
        }
    }

    for(int i = 0; i < tamanho_numero; i++) {
        for(int j = 0; j < tamanho; j++) {
            if(numeros[i] == sequencia[j]) {
                frequencia[i]++;
            }
        }
    }
    
    for(int i = 0; i < tamanho_numero; i++) {
        printf("O numero %i apareceu %i vez.\n", numeros[i], frequencia[i]);
    }
}