#include <stdio.h>

// Variáveis e suas atribuições ppor tipo => type
int main(){
    // Variáveis e seus valores
    int idade = 18;
    float salario = 1250.75;
    double desconto = 2.5;
    char genero = 'F';
    float altura = 1.63;

    // Exibindo o resultado
    printf("\n Idade %d", idade);
    printf("\n Salário %f", salario);
    printf("\n Disconto (%) %f", desconto);
    printf("\n Gênero %c", genero);
    printf("\n Altura %.3f", altura);
    printf("\n");

    return 0;
}