/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com variáveis do tipo global
*/

#include<stdio.h>

int x = 10;

int main(){
    int x = -1;
    int b;

    // Alterando o valor de "x", recuperando o valor atribuído à "x" na variável global "int x = 10;"
    // Usando a palavra reservada "extern", para acessar a variável global "int x = 10;", criada anteriormente antes da função "... main(){...}"
    {
        extern int x;
        b = x;
    }

    printf("\n Valor de x: %d", x);
    printf("\n Valor de b (x global): %d", b);
    printf("\n");

    return 0;
}