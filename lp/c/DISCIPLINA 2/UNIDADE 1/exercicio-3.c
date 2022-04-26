/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Função para gerar números aleatórios de 0 até 99
*/

#include<stdio.h>

int * gerarRandomico(){
    static int r[10];
    int a;

    for(a = 0; a < 10; a++){
        r[a] = rand() % 100;

        printf("\n r[%d] = %d", a, r[a]);
    }

    return r;
}

int main(){
    int * p;
    int i;

    p = gerarRandomico();

    for(i = 0; i < 10; i++){
        printf("\n p[%d] = %d", i, p[i]);
    }

    printf("\n");

    return 0;
}