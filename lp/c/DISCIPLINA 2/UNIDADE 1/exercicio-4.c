/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Recuperando valores da ponteiro/memória "*", "*alocar" ou "num*" ou "*num"
*/

#include<stdio.h>

#include<stdlib.h>

int *alocar(){
    int *memoria = (int*) malloc(sizeof(int));

    return memoria;
}

int main(){
    int *num = alocar();

    if(num != NULL){
        printf("\n Informe um número inteiro ");
        scanf("%d", num);

        printf("\n Número informado é: %d \n", *num);
    }

    return 0;
}