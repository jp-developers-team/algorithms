/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com funções, com passagem de parâmetros do tipo "void", sem valor atribuídos por default
*/

#include<stdio.h>

void testar(int n1, int n2){
    n1 = -1;
    n2 = -2;

    printf("\n Valores dentro da função testar(): ");
    printf("\n n1 = %d e n2 = %d", n1, n2);
}

int main(){
    int n1 = 10;
    int n2 = 20;

    printf("\n Valores antes de chamar a função testar(): ");
    printf("\n n1 = %d e n2 = %d", n1, n2);

    testar(n1, n2);

    printf("\n Valores depois de chamar a função testar(): ");
    printf("\n n1 = %d e n2 = %d \n", n1, n2);

    return 0;
}