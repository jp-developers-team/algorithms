#include<stdio.h>

// Trabalhando com funções, com passagem de parâmetros
int funcSomar(int a, int b){
    return a + b;
}

int main(){
    int result;

    result = funcSomar(10, 15);

    printf("\n Resultado da soma: %d \n", result);

    return 0;
}