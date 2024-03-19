// Preencher automaticamente um vetor com todos os números pares entre 1 e 100 e depois exibir os números para o usuário.

#include <stdio.h>

int main() {
    int numeros[50], indice = 0;

    printf("Os numeros os números pares entre 1 e 100 sao: \n");
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            numeros[indice] = i;
            indice++;
        }
    }

    for(int i = 0 ;i < 50 ; i++) {
        if(numeros[i] % 2 == 0) {
            printf(" [%i]", numeros[i]);
        }
    }
}
