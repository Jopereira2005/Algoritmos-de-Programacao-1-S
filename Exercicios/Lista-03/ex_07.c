// Um triângulo pode ser classificado de acordo com as medidas de seus lados:
// - Um triângulo equilátero possui todos os lados de mesma medida.
// - Um triângulo isósceles possui dois lados de mesma medida.
// - Um triângulo escaleno possui as medidas dos três lados diferentes.
// Receber os três lados de um triângulo em qualquer ordem (chame de lado1, lado2 e lado3) e classificá-lo em equilátero, isósceles ou escaleno.

#include <stdio.h>

int main() {
    int lado_1, lado_2, lado_3;

    printf("Digite o valor dos tres lados de um triangulo. \n");
    printf("Lado 1: \n");
    scanf("%i", &lado_1);
    printf("Lado 2: \n");
    scanf("%i", &lado_2);
    printf("Lado 3: \n");
    scanf("%i", &lado_3);

    if(lado_1 == lado_2) {
        if(lado_2 == lado_3 && lado_1 == lado_3) {
            printf("O triangulo é equilatero.");
        } else {
            printf("O triangulo é isosceles.");
        }
    } else {
        printf("O triangulo é escaleno.");
    }
}