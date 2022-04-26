/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com Recursividade em cauda, empilhamento
*/

#include<stdio.h>;

int fatorialCauda(int n){
    return fatorialAux(n, 1);
}

// Fatorial auxiliar, manipulando valore de "fatorialCauda"
int fatorialAux(int n, int parcial){
    if(n != 1){
        return fatorialAux(n -1, parcial * n);
    }else{
        return parcial;
    }
}

int main(){
    int n, resultado;

    printf("\n Digite um número inteiro positivo: ");
    scanf("%d", &n);

    resultado = fatorialCauda(n);

    printf("\n Resultado = %d \n", resultado);

    return 0;
}