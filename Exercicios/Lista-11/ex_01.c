// Solicite ao usuário que digite uma senha composta por 6 caracteres e na sequência pergunte novamente a senha. Confira se as duas sequências de caracteres são iguais e em caso afirmativo, exiba uma mensagem dizendo que a senha é valida. Caso os três primeiros caracteres sejam iguais, informe que houve algum erro na digitação, caso contrário, a senha será inválida.

#include <stdio.h>
#include <string.h>

int main() {
  char senha[6], confirmar_senha[6];

  printf("Digite a senha: ");
  fgets(senha, 6, stdin);

  printf("Confirmar senha: ");
  fgets(confirmar_senha, 6, stdin);

  
  if(!strcmp(senha, confirmar_senha)) {
    printf("\nSenha valida.");
  } else {
    if(!strncmp(senha, confirmar_senha, 3)) {
      printf("\nHouve algum erro de digitacao.\n");
    } else {
      printf("\nSenha invalida.");
    }
  }

  strc
}