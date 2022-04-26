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

void testar(){
    x = 2 * x;
}

int main(){
    printf("\n O valor de x global é: %d", x);
    testar();
    printf("\n O valor de x global alterado em testar() é: %d", x);
    printf("\n");

    return 0;
}