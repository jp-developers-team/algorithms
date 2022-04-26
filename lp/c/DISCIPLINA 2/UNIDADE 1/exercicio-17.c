/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com Função recursiva usando fatorial
*/

#include<stdio.h>;

int fatorial(int valor){
    if(valor != 1){
        return valor * fatorial(valor - 1);
    }else{
        return valor;
    }
}

int main(){
    int n, resultado;


    printf("\n Digite um número inteiro positivo: ");
    scanf("%d", &n);

    resultado = fatorial(n);

    printf("\n Reultado = %d \n", resultado);

    return 0;
}