/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com constantes
*/

#include<stdio.h>

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