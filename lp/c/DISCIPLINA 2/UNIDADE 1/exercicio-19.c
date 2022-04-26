/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com Função fibonacci - Recursivo
*/

#include<stdio.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    }else{
        if(n == 1){
            return 1;
        }else{
            return fibonacci(n - 1) + fibonacci(n -2);
        }
    }
}

int main(){
    int n, resultado;

    printf("\n Digite um número inteiro positivo: ");
    scanf("%d", &n);

    resultado = fibonacci(n);

    printf("\n Resultado = %d \n", resultado);

    return 0;
}