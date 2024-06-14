// Elabore um programa que leia o preço de uma mercadoria e o percentual de reajuste e chame função que receba estes valores como parâmetro e retorne o novo preço da mercadoria com reajuste. Na função main( ) deve ser mostrado o preço da mercadoria depois do aumento, bem como o percentual aplicado. 

#include <stdio.h>

float reajuste(float valor, float percentual) {
  return valor + ((valor*percentual)/100);
}

int main() {
  float valor, porcentagem;

  printf("Digite um valor: ");
  scanf("%f", &valor);
  printf("Digite a porcentagem de reajuste: ");
  scanf("%f", &porcentagem);

  printf("O novo valor com o reajuste e: %.2f\n", reajuste(valor, porcentagem));
  printf("O percentual aplicado foi: %.1f%%\n", porcentagem);
}


