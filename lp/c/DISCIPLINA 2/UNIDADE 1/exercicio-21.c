/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Verifica se o dígito "N" é um número primo
*/

#include<stdio.h>

int ehPrimo(int n){
    return ehPrimoAux(n, 2);
}

int ehPrimoAux(int n, int x){
    if(n == x){
        return 1;
    }else if(n % x == 0){
        return 0;
    }else{
        return ehPrimoAux(n, x + 1);
    }
}

int main(){
    int n, resultado;

    printf("\n Digite um número inteiro positivo: ");
    scanf("%d", &n);

    resultado = ehPrimo(n);

    if(resultado == 1){
        printf("\n O dígito %d SIM, ele é um número primo : ", n);
        printf("\n");
    }else{
        printf("\n O dígito %d ele, NÃO é um número primo : ", n);
        printf("\n");
    }

    return 0;
}