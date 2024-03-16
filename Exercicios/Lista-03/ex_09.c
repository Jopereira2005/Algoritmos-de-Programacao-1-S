// Acrescente no exercício anterior a apresentação da faixa etária da pessoa, a partir da sua idade atual. 

// Faixas:
//  12 a 17 anos: Adolescente
//  18 a 25 anos: Jovem
//  26 a 65 anos: Adulto

#include <stdio.h> 

int main() {
    int idade, sexo;
    float altura, peso, peso_ideal;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if(idade > 65 || idade < 12) {
        printf("O indice não é aplicado a pessoas maiores com idade maior que 65 e menor que 12 anos.");
    } else {
        printf("Masculino = 1 | Feminino = 2\nDigite o valor correspondente ao seu sexo: ");
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

//  12 a 17 anos: Adolescente
//  18 a 25 anos: Jovem
//  26 a 65 anos: Adulto

        char faixa[12];

        if(idade <= 17) { 
            sprintf(faixa, "Adolescente");
        } else if(idade >= 18 || idade <= 25) {
            sprintf(faixa, "Jovem");
        } else {
            sprintf(faixa, "Adulto");
        }


        if(peso == peso_ideal) {
            printf("\nVoce esta no peso ideal de %.2fkg.", peso_ideal);
        } else if(peso > peso_ideal) {
            printf("\nVoce esta fora peso ideal de %.2fkg.", peso_ideal);
        } else {
            printf("\nVoce abaixo do peso ideal de %.2fkg.", peso_ideal);
        }
        
        printf("\nNa faixa de etaria de: %s.", faixa);
    }
}