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

// Manipulando dados de um vetor
int main(){
    int num[2] = {10, 20};

    printf("\n Utilizando o índice do vetor");
    printf("\n Recuperando e guardando na memória o valor do índice na posição [0]: %d", &num[0]);
    printf("\n Utilizando o ponteiro ou o cursor: %d", *num);
    printf("\n");

    return 0;
}