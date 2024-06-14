// Receba um vetor de caracteres para guardar uma sequencia de 10 letras. Na sequencia exiba as 6 primeiras letras, sendo que apenas uma letra deve ser apresentada por linha. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 11

int main() {
  char vetor[MAX];
  printf("Digite uma palavra: ");
  fgets(vetor, MAX, stdin);

  printf("%i\n", strlen(vetor));
  
  for(int i = 0; i < 6; i++) {
    printf("[%c]\n", vetor[i]);
  }
}