/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 1 - Conceitos de algoritmos e programação
* Aulas:          [Introdução aos algoritmos], [Componentes e elementos de linguagem de programação] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com valores decimais => float/double
*/

#include <stdio.h>

int main(){
    // Variáveis e seus valores
    float valor1 = 0, valor2 = 0;

    // Informa o usuário para entrar com primeiro valor
    printf("\n Digite o primeiro valor: ");
    // Captura o valor digitado pelo usuário
    scanf("%f", &valor1);

    // Informa o usuário para entrar com o segundo valor
    printf("\n Digite o segundo valor: ");
    // Captura o valor digitado pelo usuário
    scanf("%f", &valor2);

    // Exibindo o resultado
    printf("\n Variável 1 = %.2f", valor1);
    printf("\n Variável 2 = %.2f", valor2);
    printf("\n");

    return 0;
}