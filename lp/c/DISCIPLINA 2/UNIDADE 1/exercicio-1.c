#include<stdio.h>

// Trabalhando com funções, chamando uma determinada função
int soma(){
    return 2 + 3;
}

int main(){
    int resultado = 0;
    resultado = soma();

    printf("O resultado da função é %d", resultado);
    printf("\n");

    return 0;
}