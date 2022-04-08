#include<stdio.h>

#define TAM_NOME_CLIENTE 100

struct cliente{
    char nome[TAM_NOME_CLIENTE];
    int idade;
};

int main(void){
    struct cliente cli;

    int classificacao_filme;
    
    printf("\n Informe o nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, TAM_NOME_CLIENTE, stdin);

    printf("\n Informe a idade do Cliente: ");
    scanf("%d", &cli.idade);

    printf("\n Informe a classificação do filme: ");
    scanf("%d", &classificacao_filme);

    printf("\n Nome cliente: %s", cli.nome);
    printf("\n Idade cliente: %d", cli.idade);
    printf("\n Classificação indicativa filme: %d anos", classificacao_filme);
    printf("\n");
}
