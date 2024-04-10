// Leia um vetor A de 6 elementos contendo o gabarito da Mega-Sena. O sorteio consiste na extração de 6 números diferentes, no universo de 01 a 60. A seguir, ler um vetor B de 10 elementos contendo uma aposta. Escrever quantos pontos fez o apostador, e se ele fez a sena (6 acertos), a quina (5 acertos) ou a quadra (4 acertos).

#include <stdio.h>

int main() {
    int gabarito[6] = {1, 2, 3, 4, 5, 6}, aposta[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, acertos = 0;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 6; j++) {
            if(gabarito[j] == aposta[i]) {
                acertos++;
            }
        }
    }

    printf("Acertos: %i\n", acertos);

    if(acertos == 4) {
        printf("Parabens voce fez uma quadra\n");
    } else if (acertos == 5) {
        printf("Parabens voce fez uma quina\n");
    } else if (acertos == 6) {
        printf("Parabens voce fez uma sena\n");
    } else {
        printf("Tente uma proxima vez\n");
    }
}
