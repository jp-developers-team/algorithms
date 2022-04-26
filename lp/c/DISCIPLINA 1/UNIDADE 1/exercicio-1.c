/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 1 - Conceitos de algoritmos e programação
* Aulas:          [Introdução aos algoritmos], [Componentes e elementos de linguagem de programação] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Variáveis e suas atribuições ppor tipo => type
*/

#include <stdio.h>

int main(){
    // Variáveis e seus valores
    int idade = 18;
    float salario = 1250.75;
    double desconto = 2.5;
    char genero = 'F';
    float altura = 1.63;

    // Exibindo o resultado
    printf("\n Idade %d", idade);
    printf("\n Salário %f", salario);
    printf("\n Disconto (%) %f", desconto);
    printf("\n Gênero %c", genero);
    printf("\n Altura %.3f", altura);
    printf("\n");

    return 0;
}