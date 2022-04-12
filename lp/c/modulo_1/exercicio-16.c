#include<stdio.h>

// Cálculo de metros quadrados => cumprimento * largura
int main(){
    float cumprimento, largura, resultado;
    int resposta;

    cumprimento = 0;
    largura = 0;
    resultado = 0;

    do {
        printf("\n Digite o cumprimento do terreno: ");
        scanf("%f", &cumprimento);

        printf("\n Digite a largura do terreno: ");
        scanf("%f", &largura);

        resultado = cumprimento * largura;

        printf("\n O terreno tem %.2f m de cumprimento: ", cumprimento);
        printf("\n O terreno tem %.2f m de largura: ", largura);
        printf("\n Totalizando %.2f m2", resultado);

        printf("\n Digite [1] para CONTINUAR ou [2] para SAIR ");
        scanf("%d", &resposta);

    } while(resposta == 1);

    return 0;
}