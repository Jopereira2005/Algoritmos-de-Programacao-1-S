// A velocidade média de um veículo em um percurso é dada através da distância percorrida pelo tempo, ou seja, Vm = /\S / /\t. Calcular e exibir a velocidade média do veículo em uma estrada recebendo esses dois dados do percurso.
#include <stdio.h>

int main() {
    float distancia, tempo, resultado;

    printf("Digite o valor da distancia(m): \n");
    scanf("%f", &distancia);
    printf("Digite o valor do tempo(s): \n");
    scanf("%f", &tempo);

    resultado = distancia / tempo;

    printf("A velocidade media percorrida no percurso de %.2fm em %.2fs e: %.2fm/s", distancia, tempo, resultado);
}