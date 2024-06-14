// Escreva um programa que receba uma palavra que contenha no máximo 10 caracteres e no mínimo 3. Caso a palavra digitada não esteja de acordo, informe a quantidade de caracteres digitados e leia uma nova palavra. 

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10
#define MIN_LENGTH 3

int main() {
  char palavra[MAX_LENGTH];

  inicio:

  printf("Digite uma palavra: ");
  fgets(palavra, MAX_LENGTH, stdin);

  int quantidade = strlen(palavra) - 1;

  printf("%i", quantidade);

  if(quantidade > MAX_LENGTH || quantidade < MIN_LENGTH) {
    printf("\nA palavra que voce digitou tem %i letras\n", quantidade);
    goto inicio;
  }
}