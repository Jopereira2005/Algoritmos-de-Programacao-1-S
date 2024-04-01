// Receber 10 números e armazená-los em um vetor. Copiar os números em outro vetor na ordem inversa e mostrar na tela todas as posições em que se tem o mesmo número nos dois vetores.

#include <stdio.h>

int main() {
    int vetor[10], vetor_invertido[10], posicoes[10], num, tamanho = 0, i =  0, j = 10;

    printf("Digite 10 numeros: \n");
    for(i =  0, j = 9; i < 10; i++, j--) {
        printf("Numero %i: ", i + 1);
        scanf("%i", &num);

        vetor[i] = num;
        vetor_invertido[9 - i] = num;
    }

    for(i = 0; i < 10; i++) {
        if(vetor[i] == vetor_invertido[i]) {
            posicoes[i] = i + 1;
            tamanho++;
        }
    }

    printf("Tamanho: %i\n", tamanho);
    printf("Vetor normal: \n");
    for(i = 0; i < 10; i++) {
        printf("[%i] ", vetor[i]);
    }

    printf("\nVetor invertido: \n");
    for(i = 0; i < 10; i++) {
        printf("[%i] ", vetor_invertido[i]);
    }

    printf("\nAs posicoes nas quais os valores sao os mesmo no vetor normal e invertido sao: \n");

    if (tamanho > 0) {
        for(i = 0; i < tamanho; i++) {
            printf("[%i] ", posicoes[i]);
        }
    } else {
        printf("Nao ha posicoes iguais.\n");
    }
}