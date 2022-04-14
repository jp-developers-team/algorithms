#include<stdio.h>

int x = 10;

// Trabalhando com variáveis do tipo global
void testar(){
    x = 2 * x;
}

int main(){
    printf("\n O valor de x global é: %d", x);
    testar();
    printf("\n O valor de x global alterado em testar() é: %d", x);
    printf("\n");

    return 0;
}