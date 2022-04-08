#include <stdio.h>
#include <stdbool.h>

// Cálculo de média da idade de três pessoas
int main(void){
    // Variáveis e seus valores
    int idade[3] = {0, 0, 0};
    float media = 0.0;

    // Informa o usuário para entrar com o primeiro valor
    printf("\n Informe a idade da pessoa 1: ");
    // Captura o valor informado pelo usuário
    scanf("%d", &idade[0]);

    // Informa o usuário para entrar com o segundo valor
    printf("\n Informe a idade da pessoa 2: ");
    // Captura o valor informado pelo usuário
    scanf("%d", &idade[1]);

    // Informa o usuário para entrar com o terceiro valor
    printf("\n Informe a idade da pessoa 3: ");
    // Captura o valor informado pelo usuário
    scanf("%d", &idade[2]);

    // Cálculo matemático para para a meia, apartir dos três valores informados pelo usuário
    media = (idade[0] + idade[1] + idade[2]) / 3;

    // Apresenta o resultado
    printf("\n Média de idade = %.2f", media);
    printf("\n");

    return 0;
}
