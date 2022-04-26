/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com funções, com passagem de parâmetros do tipo vetor[], calculando a média e a mediana
*/

#include <stdio.h>
//#define VET_TAM 6
//#define VET_TAM 9
#define VET_TAM 10

float calcularMedia(float conjunto[], int tam) {
    float soma = 0.0, resultado = 0.0;
    
    for(int i = 0; i < tam; i++) {
        soma += conjunto[i];
    }

    // calc media
    resultado = soma / (float) tam;

    return resultado;
}

float calcularMediana(float conjunto[], int tam) {
    float resultado = 0.0;

    if (tam % 2 != 0) { // tam é impar
        resultado = conjunto[tam / 2];
    } else { // tam é par
        // calc mediana
        resultado = (conjunto[tam / 2] + conjunto[(tam / 2) - 1]) / 2;
    }
    
    return resultado;
}

int main(void){
    //float vet[VET_TAM] = {1, 2, 3, 4, 5, 6};
    //float vet[VET_TAM] = {21, 24, 31, 32, 32, 32, 33, 44, 65};
    float vet[VET_TAM] = {18, 19, 19, 22, 44, 45, 46, 46, 47, 48};

    float media = calcularMedia(vet, VET_TAM);
    float mediana = calcularMediana(vet, VET_TAM);

    printf("\nMédia = %.2f", media);
    printf("\nMediana = %.2f", mediana);
    printf("\n");
}
