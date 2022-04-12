#include <stdio.h>

// Obtendo o endereço de memória das respectivas variáveis
int main(){
    // Variáveis e seus valores
    int x = 5, y = 10;

    // Exibindo o resultado
    printf("\n Valor guardade em x: %d", x);
    printf("\n Valor guardade em y: %d", y);

    // Exibindo o endereço de memória de cada variável acima
    printf("\n Endereço de memória de x %x", &x);
    printf("\n Endereço de memória de y %x", &y);
    printf("\n");

    return 0;
}