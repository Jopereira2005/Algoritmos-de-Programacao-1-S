// Escreva um programa com uma função que receba 3 valores de entrada e retorne o maior valor entre estes três valores.

#include <stdio.h>

int maior(int num_1, int num_2, int num_3) {
  int maior = num_1;

  if (num_2 > maior) {
    maior = num_2;
  } if (num_3 > maior) {
    maior = num_3;
  } 

  return maior;
}

int main() {
  int num_1, num_2, num_3;

  printf("Digite o primeiro numero: ");
  scanf("%i", &num_1);
  printf("Digite o segundo numero: ");
  scanf("%i", &num_2);
  printf("Digite o terceiro numero: ");
  scanf("%i", &num_3);

  printf("O maior numero e: %i", maior(num_1, num_2, num_3));

}