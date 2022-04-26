/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com Função fibonacci - NÃO Recursivo
*/

#include<stdio.h>

int fibonacci(int n){
    int i, j, f;
    
    if(n == 0){
        return f = 0;
    }else if(n == 1){
        return i = 1;
    }else{
        i = 1;
        f = 0;

        for(j = 0; j < n; j++){
            f += i;
            i = f - i;
        }
    
        return f;
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