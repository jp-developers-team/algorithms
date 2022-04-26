/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com constant
*/

#include<stdio.h>
#include<ctype.h>

#define NOME_TAM 30

// Trabalhando com PARSE to UPPERCASE
int main(){
    char nome[NOME_TAM];
    int i;

    printf("\n Informe o nome do(a) aluno(a): ");
    fflush(stdin);
    fgets(nome, NOME_TAM, stdin);

    printf("\n Esse é nome ANTES da mudança: %s", nome);

    for(int i = 0; i < NOME_TAM; i++){
        nome[i] = toupper(nome[i]);
    }

    printf("\n Esse é nome DEPOIS da mudança: %s", nome);

    return 0;
}