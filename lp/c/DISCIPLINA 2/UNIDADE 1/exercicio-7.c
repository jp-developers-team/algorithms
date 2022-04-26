/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com variáveis do tipo global, chamando uma função sem parâmetros
*/

#include<stdio.h>

float t1, t2;

float calcMedia(){
    return (t1 + t2)/2;
}

int main(){
    printf("\n Digite as duas temperaturas, digitar um após a outra: ");
    scanf("%f %f", &t1, &t2);

    printf("\n Fórmula calcMédia() => %.2f+%.2f/2 = %.2f \n", t1, t2, calcMedia());
    printf("\n A temperatura média é: %.2f C° \n", calcMedia());

    return 0;
}