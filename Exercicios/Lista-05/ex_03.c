// Solicitar quantos números o usuário deseja informar, receber cada um deles e mostrar a média aritmética dos valores positivos no final.

#include <stdio.h>

int main() {
    int qtdd;
    float num, media, postivos;

    printf("Digite a quantidade de numeros: ");
    scanf("%i", &qtdd);

    for(int i = 1 ; i <= qtdd; i++) {
        printf("Digite o %i numero: ", i);
        scanf("%f", &num);

        if(num >= 0) {
            media += num;
            postivos++;
        }    
    }

    printf("A media aritimetica dos numeros positivos inseridos e: %.2f", media/postivos);
}