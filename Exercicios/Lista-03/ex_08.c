// Faça um programa para calcular o peso ideal de uma pessoa. Ao iniciar o programa, peça a idade da pessoa, pois o índice não é preciso para crianças e pessoas idosas. Assim, não calcule para pessoas maiores que 65 anos e menores que 12 anos. Através do sexo (1 para masculino, 2 para feminino) e da altura, calcular o peso ideal de uma pessoa. Receber também o peso atual dela e indicar se a mesma está no peso ideal, acima ou abaixo, conforme o cálculo:

// - Fórmula do peso ideal do homem: (72.7 * altura) – 62
// - Fórmula do peso ideal da mulher: (62.1 * altura) – 48.7 

#include <stdio.h> 

int main() {
    int idade, sexo;
    float altura, peso, peso_ideal;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if(idade > 65 || idade < 12) {
        printf("O indice não é aplicado a pessoas maiores com idade maior que 65 e menor que 12 anos.");
    } else {
        printf("Masculino = 1 | Feminino = 2\nDigite o valor correspondido ao seu sexo: ");
        scanf("%i", &sexo);
        printf("Digite sua altura(m): ");
        scanf("%f", &altura);

        if(sexo == 1) {
            peso_ideal = (72.7 * altura) - 62;
        } else if (sexo == 2) {
            peso_ideal = (62.1 * altura) - 48.7;
        } else {
            printf("O valor digitado é invalido.");
            return 0;
        }

        printf("Digite seu peso(kg): ");
        scanf("%f", &peso);

        if(peso == peso_ideal) {
            printf("\nVoce esta no peso ideal de %.2fkg.", peso_ideal);
        } else if(peso > peso_ideal) {
            printf("\nVoce esta fora peso ideal de %.2fkg.", peso_ideal);
        } else {
            printf("\nVoce abaixo do peso ideal de %.2fkg.", peso_ideal);
        }
        
    }
}