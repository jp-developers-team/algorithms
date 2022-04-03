#include <stdio.h>

// Trabalhando com valores decimais => float/double
int main(){
    float valor1 = 0, valor2 = 0;

    printf("\n Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("\n Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("\n Variável 1 = %.2f", valor1);
    printf("\n Variável 2 = %.2f", valor2);
    printf("\n");

    return 0;
}