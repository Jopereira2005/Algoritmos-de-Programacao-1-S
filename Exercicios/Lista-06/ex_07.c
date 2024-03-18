// Escreva um programa que calcule todos os números inteiros divisíveis por um certo valor indicado pelo usuário, e compreendidos em um intervalo também especificado pelo usuário. O usuário deve  entrar com um primeiro valor correspondente ao divisor e após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo. Exemplo:
// Digite o valor do divisor: 3
// Digite o início do intervalo: 17
// Digite o final do intervalo: 29
// Numeros divisíveis por 3 no intervalo de 17 a 29: 18 21 24 27 

#include <stdio.h>

int main() {
    int divisor, inicio, fim, i;

    printf("Digite valor do divisor: ");
    scanf("%i", &divisor);
    printf("Digite o inicio do intervalo: ");
    scanf("%i", &inicio);
    printf("Digite o fim do intervalo: ");
    scanf("%i", &fim);
    
    i = inicio;
    printf("\nNumeros divisiveis por %i no intervalo de %i a %i: ", divisor, inicio, fim);

    while((i + 1) < fim) {
        if(i % divisor == 0) {
            printf("%i ", i);
        }
        i++;
    }
}

