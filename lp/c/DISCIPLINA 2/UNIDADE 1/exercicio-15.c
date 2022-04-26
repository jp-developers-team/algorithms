/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Aula reforço:   Tutorial youtube => https://www.youtube.com/watch?v=UWqNbn8KE9M
* Descrição:      Trabalhando com funções, com passagem de parâmetros do tipo vetor[], ordenando os números, calculando a média, mediana e a moda
*/

#include<stdio.h>

int main(){
    int v[1000], v2[1000], i, n, j, moda = 0, media = 0, mediana = 0, x, m = 0, md = 0, chave = 0, maior;

    printf("\n Informe um número inteiro positivos: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\n Agora informe %d números inteiros positivos aleatórios: ", n);
        printf("\n Digite o número na posição [%d]: ", i);
        scanf("%d", &x);
        v[i] = x;
    }

    int ordenado = 0;

    // Ordenação
    while(ordenado == 0){
        ordenado = 1;

        for(int i = 0; i < n; i++){
            if(v[i] < v[i -1]){
                int aux = v[i];

                v[i] = v[i - 1];
                v[i - 1] = aux;

                ordenado = 0;
                printf("\n Ordenação = %d", v[i]);
            }
        }
    }

    // Media => somar todos os valores e dividir pelo quantidade total de números informado pelo usuário
    for(int i = 0; i < n; i++){
        m = m + v[i];
    }

    media = m/n;

    printf("\n Media = %d", media);

    // Mediana => encontrar os dois valores centrais, somá-los e dividir por 2
    if(n % 2 == 0){ //Número é par
        md = (n / 2);
        mediana = (v[md] + v[md -1] / 2);
    }else{ //Número é ímpar
        md = (n / 2);
        mediana = v[md];
    }

    printf("\n Mediana = %d", mediana);

    //Moda => valor que mais se repete na sequência de números informados pelo usuário
    for(int i = 0; i < n; i++){
        v2[i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(v[i] == v[j]){
                v2[i] = v2[i] + 1;
            }
        }
    }
    
    maior = 0;

    for(int i = 0; i < n; i++){
        if(v2[i] > maior){
            maior = v2[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(v2[i] == maior){
            chave = i;
        }
    }

    printf("\n Moda = %d", v[chave]);
    printf("\n");

    return 0;
}