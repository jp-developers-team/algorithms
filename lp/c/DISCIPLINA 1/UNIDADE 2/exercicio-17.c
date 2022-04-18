#include<stdio.h>

// MENU de opções com laço de repetição "DO WHILE"
int main(){
    float soma = 0, valor;
    int opcao;

    do {
        printf("\n MENU DE OPÇÕES \n");
        printf("\n 1. DEPÓSITO ");
        printf("\n 2. SAQUE ");
        printf("\n 3. SALDO ");
        printf("\n 4. SAIR \n");
        printf("\n Selecione uma das opções acima citado ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("\n Informe o valor a ser depositado: ");
                scanf("%f", &valor);
                //soma = valor = valor;
                soma += valor;
                break;
            case 2:
                printf("\n Informe o valor desejado para saque: ");
                scanf("%f", &valor);
                //soma = valor -  valor;
                soma -= valor;
                break;
            case 3:
                printf("\n Saldo atual é de %.2f", soma);
                break;
            case 4:
                printf("\n Saindo... ");
                break;
            default:
                printf("\n Opção inválida, tente novamente! ");
                break;
        }

    } while(opcao != 4);

    printf("\n Fim das operações. \n");

    return 0;
}