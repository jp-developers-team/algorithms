#include<stdio.h>

//Trabalhando com constantes
#define TAM_NOME_CLIENTE 100

// Trabalhando com classe/Modelo/Entidade
struct cliente {
    char nome[TAM_NOME_CLIENTE];
    int idade;
};

int main(){
    //Instanciando a class automovel como um novo modelo
    struct cliente cli;

    int class_indicativa_film;

    printf("\n Informe o nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, TAM_NOME_CLIENTE,  stdin);

    printf("\n Informe a idade do cliente: ");
    scanf("%d", &cli.idade);

    printf("\n Informe a classificação indicativa do filme: ");
    scanf("%d", &class_indicativa_film);

    printf("\n Nome do cliente: %s", cli.nome);
    printf("\n Idade do cliente: %d", cli.idade);
    printf("\n Classificação indicativa do filme: %d anos", class_indicativa_film);
    printf("\n");

    return 0;
}