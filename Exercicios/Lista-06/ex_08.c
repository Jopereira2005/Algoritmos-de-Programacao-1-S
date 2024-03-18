// A prefeitura de Sorocaba está em eleições. Apresentaram-se 3 candidatos: JOSÉ com o nº 1, MARIA com o nº 2 e JOÃO com o nº 3. Cada eleitor deve indicar a sua opção, que pode ser o nº de um candidato (1,2,3), voto branco (nº 4) ou voto nulo (nº 5). Preparar um programa que receba e processe os dados de um número não determinado de cédulas até que seja digitado 0 para o voto, escrevendo os seguintes dados:
// a) o número de votos de cada uma das 5 opções;
// b) o nome do candidato vencedor;
// c) o percentual de eleitores que elegeram o candidato vencedor. 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int voto, opc_1, opc_2, opc_3, opc_4, opc_5, vencedor, percentual, qtdd;

    while(voto != 0) {
        printf("+---+----------+\n");
        printf("| 1 | Jose     |\n");
        printf("| 2 | Maria    |\n");
        printf("| 3 | Joao     |\n");
        printf("| 4 | Branco   |\n");
        printf("| 5 | Nulo     |\n");
        printf("| 0 | Encerrar |\n");
        printf("+---+----------+\n\n");

        printf("Escolha uma das opcoes acima para a votacao: ");
        scanf("%i", voto);

        if(voto != 0) {
            switch (voto) {
                case 1: 
                    opc_1++;
                    break;
                case 2:
                    opc_2++;
                    break;
                case 3:
                    opc_3++;
                    break;
                case 4:
                    opc_4++;
                    break;
                case 5:
                    opc_4++;
                    break;
                default:
                    printf("\nOpcao invalida: \n\n");
                    break;
            }
        }
    }
    percentual = 100/(opc_1 + opc_2 + opc_3 + opc_4 + opc_5);   
}
