// Receber um número e calcular o valor de sua raiz quadrada e sua oitava potência. Utilize as funções pow(base,expoente) e sqrt(num) da biblioteca <math.h>. Mostrar os valores obtidos.
#include <stdio.h>
#include <math.h>

int main() {
    float num, raiz, potencia;
    printf("Digite um numero: \n");
    scanf("%f", &num);
    
    potencia = pow(num, 8);
    raiz = sqrt(num);

    printf("A raiz quadrada e oitava potencia de %.0f sao respectivamente: \n", num);
    printf("raiz: %.2f \n", raiz);
    printf("potencia: %.2f \n", potencia);
}
