// Receber 10 números e mostrar o dobro de cada um deles. 

#include <stdio.h>

int main() {
    int i, lista[10];

    printf("Digite 10 numeros:\n");
    for(i = 0;i < 10 ;i++) {
        printf("%i numero: ", (i + 1));
        scanf("%i", &lista[i]);
    }

    printf("\nO dobro dos numeros digitados sao: \n");
    for (i = 0; i < 10; i++) {
        printf("Numero %i: %i\n", i + 1, (lista[i] * 2));
    }
}
