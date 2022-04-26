/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Classe "automovel" representando o "model" modelo/entidade e seus atributos
*/

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
