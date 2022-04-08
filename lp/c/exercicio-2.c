#include <stdio.h>

// Trabalhando com valores decimais => float/double
int main(){
    // Variáveis e seus valores
    float valor1 = 0, valor2 = 0;

    // Informa o usuário para entrar com primeiro valor
    printf("\n Digite o primeiro valor: ");
    // Captura o valor digitado pelo usuário
    scanf("%f", &valor1);

    // Informa o usuário para entrar com o segundo valor
    printf("\n Digite o segundo valor: ");
    // Captura o valor digitado pelo usuário
    scanf("%f", &valor2);

    // Exibindo o resultado
    printf("\n Variável 1 = %.2f", valor1);
    printf("\n Variável 2 = %.2f", valor2);
    printf("\n");

    return 0;
}