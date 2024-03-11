// Receber um ano e se este ano for bissexto exibir na tela “Ano Bissexto”, senão exibir na tela “Ano Não-Bissexto”. Um ano é bissexto se for divisível por 4, mas não por 100. Um ano também é bissexto se for divisível por 400.

#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano:\n");
    scanf("%i", &ano);

    if(ano % 4 == 0 || ano % 100 != 0 || ano % 400 == 0) {
        printf("Ano Bissexto");
    } else {
        printf("Ano Nao-Bissexto");
    }
}