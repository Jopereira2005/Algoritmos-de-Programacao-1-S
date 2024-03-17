// Solicitar quantos números o usuário deseja informar, receber cada um deles e mostrar a média aritmética no final.

#include <stdio.h>

int main() {
    int qtdd;
    float num, media;

    printf("Digite a quantidade de numeros: ");
    scanf("%i", &qtdd);

    for(int i = 1 ; i <= qtdd; i++) {
        printf("Digite o %i numero: ", i);
        scanf("%f", &num);

        media += num;
    }

    printf("A media aritimetica dos numeros inseridos e: %.2f", media/qtdd);
}