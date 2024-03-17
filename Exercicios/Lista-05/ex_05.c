// A prefeitura de uma cidade de 15 habitantes fez uma pesquisa coletando salário e número de filhos de cada um. A prefeitura deseja saber:
// - média do salário da população;
// - média do número de filhos;
// - maior salário;
// - percentual de pessoas com salário até R$ 500,00. 

#include <stdio.h>

int main() {
    float salarios[14], filhos[14], media_sal, media_fil, maior_sal = 0;
    float qtdd_sal = 0;

    for(int i = 0; i < 14; i++) {
        printf("Digite o salario do %i habitante: ", i + 1);
        scanf("%f", &salarios[i]);

        printf("Digite o numero de filhos do %i habitante: ", i + 1);
        scanf("%f", &filhos[i]);
    }

    for(int i = 0; i < 14; i++) {
        media_sal += salarios[i];
        media_fil += filhos[i];

        if(salarios[i] > maior_sal) {
            maior_sal = salarios[i];
        }

        if(salarios[i] <= 500) {
            qtdd_sal++;
        }
    }

    printf("\nA media salarial dos habitante e: %.2f", media_sal/15);
    printf("\nA media de filhos dos habitante e: %.2f", media_fil/15);
    printf("\nO maior salario dos habitantes e: R$%.2f", maior_sal);
    printf("\nO percentual de pessoa com o salario ate R$500 e de: %.2f%%", (100/15) * qtdd_sal);
}