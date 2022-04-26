/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com funções, chamando a função que calcula o quadrado de um número qualquer
*/

#include<stdio.h>

float calcular(){
    float num;

    printf("\n Digite um número ");
    scanf("%f", &num);

    return num * num;
}

int main(){
    float resultado = 0;

    resultado = calcular();

    printf("\n O quadrado [x²] do número digitado é: %.2f \n", resultado);

    return 0;
}