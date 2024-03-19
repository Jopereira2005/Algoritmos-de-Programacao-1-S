// Receber números do usuário para preencher um vetor de 10 posições, porém, só é permitido armazenar no vetor números positivos (repetir até que as 10 posições do vetor estejam preenchidas). No final, exiba a soma de todos os números que estão nas posições ímpares do vetor. 

#include <stdio.h>

int main() {
    int numeros[10], num; 
    int i = 0, soma = 0;

    printf("Digite 10 numeros, somente valores positivos: \n");
    
    do {
        printf("Digite o %i numero: ", i + 1);
        scanf("%i", &num);
        if(num >= 0) {
            numeros[i] = num;
            i++;
        } else {
            printf("Digite um valor positivo.\n");
        }
    } while(i < 10);

    for(int i = 0; i < 10; i++) {
        if((i + 1) % 2 != 0) {
            soma += numeros[i];
        } 
    }
    printf("A soma das posicoes impares e: %i", soma);
}
