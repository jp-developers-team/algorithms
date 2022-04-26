/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 1 - Conceitos de algoritmos e programação
* Aulas:          [Introdução aos algoritmos], [Componentes e elementos de linguagem de programação] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Obtendo o endereço de memória das respectivas variáveis
*/

#include <stdio.h>

int main(){
    // Variáveis e seus valores
    int x = 5, y = 10;

    // Exibindo o resultado
    printf("\n Valor guardade em x: %d", x);
    printf("\n Valor guardade em y: %d", y);

    // Exibindo o endereço de memória de cada variável acima
    printf("\n Endereço de memória de x %x", &x);
    printf("\n Endereço de memória de y %x", &y);
    printf("\n");

    return 0;
}