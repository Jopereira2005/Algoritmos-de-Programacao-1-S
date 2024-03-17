// Desenvolver um programa que recebe a altura e o sexo (1 paramasculino, 2 para feminino) de 15 pessoas. Este programa deverá mostrar no final:
// - a menor altura do grupo;
// - a média de altura das mulheres;
// - o número de homens;
// - o sexo da pessoa mais alta. 
#include <stdio.h>

int main() {
    float alturas[14], menor_altura, maior_altura, media_alt_f;
    int sexos[14], num_homens = 0, num_mulheres = 0;
    char sexo_alt[10];

    for(int i = 0; i < 14; i++) {
        printf("Digite a altura da %i pessoa(m): ", i + 1);
        scanf("%f", &alturas[i]);

        printf("Digite o sexo da %i pessoa(1 = masculino | 2 = feminino): ", i + 1);
        scanf("%i", &sexos[i]);
    }

    menor_altura = alturas[0];
    maior_altura = alturas[0];

    for(int i = 0; i < 14; i++) {
        if(alturas[i] < menor_altura) {
            menor_altura = alturas[i];
        }

        if(sexos[i] == 2) {
            media_alt_f += alturas[i];
        }

        if(sexos[i] == 1) {
            num_homens++;
        } else {
            num_mulheres++;
        }

        if(alturas[i] > maior_altura) {
            if(sexos[i] == 1) {
                sprintf(sexo_alt, "masculino");
            } else {
                sprintf(sexo_alt, "feminino");
            }
        }
    }

    printf("\nA menor altura do grupo e: %.2f", menor_altura);
    printf("\nA media de altura das mulherese: %.2f", media_alt_f/num_mulheres);
    printf("\nO numero de homens: %i", num_homens);
    printf("\nO sexo da pessoa mais alta e: %s.", sexo_alt);
}