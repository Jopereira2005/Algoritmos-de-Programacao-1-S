// A prefeitura de Sorocaba está em eleições. Apresentaram-se 3 candidatos: JOSÉ com o nº 1, MARIA com o nº 2 e JOÃO com o nº 3. Cada eleitor deve indicar a sua opção, que pode ser o nº de um candidato (1,2,3), voto branco (nº 4) ou voto nulo (nº 5). Preparar um programa que receba e processe os dados de um número não determinado de cédulas até que seja digitado 0 para o voto, escrevendo os seguintes dados:
// a) o número de votos de cada uma das 5 opções;
// b) o nome do candidato vencedor;
// c) o percentual de eleitores que elegeram o candidato vencedor. 

#include <stdio.h>

int main() {
    int voto, opc_1 = 0, opc_2 = 0, opc_3 = 0, opc_4 = 0, opc_5 = 0, vencedor;
    float percentual;
    char nome[5];

    do {
        printf("+---+----------+\n");
        printf("| 1 | Jose     |\n");
        printf("| 2 | Maria    |\n");
        printf("| 3 | Joao     |\n");
        printf("| 4 | Branco   |\n");
        printf("| 5 | Nulo     |\n");
        printf("| 0 | Encerrar |\n");
        printf("+---+----------+\n\n");

        printf("Escolha uma das opcoes acima para a votacao: ");
        scanf("%i", &voto);

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
                    opc_5++;
                    break;
                default:
                    printf("\nOpcao invalida: \n\n");
                    break;
            }
        }
        
        vencedor = opc_1;
        sprintf(nome, "Jose");
        if(opc_2 > vencedor) {
            vencedor = opc_2;
            sprintf(nome, "Maria");
        } else if(opc_3 > vencedor) {
            vencedor = opc_3;
            sprintf(nome, "Joao");
        }
    } while (voto != 0);

    percentual = (vencedor*100)/((opc_1 + opc_2 + opc_3 + opc_4 + opc_5)); 

    printf("O resultado final da votacao foi:\n");
    printf("+---+----------+---------+\n");
    printf("| 1 | Jose     | %7i |\n", opc_1);
    printf("| 2 | Maria    | %7i |\n", opc_2);
    printf("| 3 | Joao     | %7i |\n", opc_3);
    printf("| 4 | Branco   | %7i |\n", opc_4);
    printf("| 5 | Nulo     | %7i |\n", opc_5);
    printf("+---+----------+---------+\n\n");

    printf("+----------------------------------+\n");
    printf("| O resultado final da votacao foi |\n");
    printf("+------------+---------------------+\n");
    printf("| %10s | %19i |\n", nome, vencedor);
    printf("+------------+---------------------+\n");
    printf("O percentual de voto do vencedor foi: %.2f%%\n", percentual);
}
