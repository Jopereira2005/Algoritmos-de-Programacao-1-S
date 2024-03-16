// Receber 10 números e informar se cada um deles é negativo, positivo ou nulo. 

#include <stdio.h>

int main() {
    int i, lista[10];

    printf("Digite 10 numeros:\n");
    for(i = 0;i < 10 ;i++) {
        printf("%i numero: ", (i + 1));
        scanf("%i", &lista[i]);
    }

    for(i = 0; i < 10; i++) {
        if(lista[i] == 0) {
            printf("\nO numero %i e nulo.", lista[i]);
        } else if(lista[i] > 0) {
            printf("\nO numero %i e positivo.", lista[i]);
        } else {
            printf("\nO numero %i e negativo.", lista[i]);
        }
    }
}