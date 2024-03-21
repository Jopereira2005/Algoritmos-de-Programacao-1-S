// Receber 10 números e armazená-los em um vetor. Após esta primeira etapa é necessário pedir para o usuário digitar um número. Verificar se este número está armazenado no vetor e se estiver mostrar quantas vezes o número esta armazenado no vetor, ou seja, quantas vezes o número se repete. Se o número não estiver no vetor, uma mensagem deve indicar esta condição e deverá ser solicitado um novo número para o usuário

#include <stdio.h>

int verificacao(int num, int array[]) {
    int qtdd = 0;
    for(int i = 0; i < 10; i++) {
        if(array[i] == num) {
            qtdd++;
        } 
    }
    return qtdd;
}

int main() {
    int numeros[10], num; 
    
    printf("Digite 10 numeros: \n");
    for(int i = 0; i < 10; i++) {
        printf("%i numero: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    do {
        printf("Digite um numero que esteja dentro do vetor: ");
        scanf("%i", &num);

    } while(verificacao(num, numeros) == 0);

    printf("A quantidade de %i presentes no vetor sao: %i", num, verificacao(num, numeros));
}