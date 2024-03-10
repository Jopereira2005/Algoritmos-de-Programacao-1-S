// Calcular e exibir o consumo médio de combustível de um veículo recebendo a distância percorrida e a quantidade de combustível gasto. Consumo médio = distância percorrida (km) / combustível gasto (l).
#include <stdio.h>

int main() {
    float distancia, comb_gasto, resultado;

    printf("Digite a distancia percorrida(km): \n");
    scanf("%f", &distancia);
    printf("Digite a quantidade combustivel gasto(l): \n");
    scanf("%f", &comb_gasto);

    resultado = distancia / comb_gasto;
    printf("O consumo medio do percurso e: %.2f (km/l)", resultado);
}