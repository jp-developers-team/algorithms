/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com funções, com passagem de parâmetros do tipo vetor[]
*/

#include<stdio.h>

void inserir(int a[]){
    int i = 0;
    for(i = 0; i < 3; i++){
        printf("\n Digite o valor para o índice [%d] ", i);
        scanf("%d", &a[i]);
    }
}

void imprimir(int b[]){
    int i = 0;
    for(i = 0; i< 3; i++){
        printf("\n Número no índice[%d] = %d", i, (2*b[i]));
    }
}

int main(){
    int numeros[3];

    printf("\n Preenchendo o vetor... \n");

    inserir(numeros);

    printf("\n Aplicando o dobro dos valores informados anteriormente ");

    imprimir(numeros);

    printf("\n");

    return 0;

}