// Os números, como as letras, também são símbolos e um número palíndromo é aquele que é igual quando lido nos dois sentidos (da esquerda para a direita ou da direita para a esquerda), como por exemplo, 14541,7117 e 3333. Receba um número (pergunte o tamanho do número e então receba cada parte dele) e informe se ele é ou não palíndromo. 

#include <stdio.h>

int main() {
    int numero, tamanho, parte;

    printf("Digite um numero: ");
    scanf("%i", &parte);

    printf("Digite seu tamanho: ");   
    scanf("%i", &tamanho);

    int vetor[tamanho];
    int vetor_inverso[tamanho];

    printf("Digite cada parte do numero digitado: ");
    for(int i=0; i < (tamanho - 1); i++) {
        printf("%i parte: ", i + 1);
        scanf("%i", &parte);
        
        vetor[i] = parte;
        vetor_inverso[tamanho - i] = parte;
    }

    if(vetor == vetor_inverso) {
        printf("O numero e um palindromo");
    } else {
        printf("O numero não e um palindromo");
    }
}

