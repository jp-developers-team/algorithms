#include<stdio.h>

int x = 10;

// Trabalhando com variáveis do tipo global
int main(){
    int x = -1;
    int b;

    // Alterando o valor de "x", recuperando o valor atribuído à "x" na variável global "int x = 10;"
    // Usando a palavra reservada "extern", para acessar a variável global "int x = 10;", criada anteriormente antes da função "... main(){...}"
    {
        extern int x;
        b = x;
    }

    printf("\n Valor de x: %d", x);
    printf("\n Valor de b (x global): %d", b);
    printf("\n");

    return 0;
}