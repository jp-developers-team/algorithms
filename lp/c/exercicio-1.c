#include <stdio.h>

// Apresentando as variáveis e suas atribuições ppor tipo => type
int main(){
    int idade = 18;
    float salario = 1250.75;
    double descontot = 2.5;
    char genero = 'F';
    float altura = 1.63;

    printf("\n Idade %d", idade);
    printf("\n Salário %f", salario);
    printf("\n Disconto (%) %f", descontot);
    printf("\n Gênero %c", genero);
    printf("\n Altura %.3f", altura);
    printf("\n");

    return 0;
}