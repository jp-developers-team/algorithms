#include <stdio.h>

// Apresentando o endereço de memória das variáveis
int main(){
    int x = 5, y = 10;

    printf("\n Valor guardade em x: %d", x);
    printf("\n Valor guardade em y: %d", y);

    printf("\n Endereço de memória de x %x", &x);
    printf("\n Endereço de memória de y %x", &y);
    printf("\n");

    return 0;
}