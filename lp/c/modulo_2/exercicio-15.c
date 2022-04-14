#include<stdio.h>

// Trabalhando com funções, com passagem de parâmetros do tipo vetor[], calculando a média e a mediana
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
                int aux = 0;

                v[i] = v[i - 1];
                v[i - 1] = aux;

                ordenado = 0;
            }
        }
    }

    // Media => somar todos os valores e dividir pelo quantidade total de números encontrados
    for(int i = 0; i < n; i++){
        m = m + v[i];
    }

    media = m/n;

    printf("\n Media = %d", media);

    // Mediana => encontrara os dois valores centrais, somá-los e dividir o produto popr 2
    if(n % 2 == 0){ //Número é par
        md = (n / 2);
        mediana = (v[md] + v[md -1] / 2);
    }else{ //Número é ímpar
        md = (n / 2);
        mediana = v[md];
    }

    printf("\n Mediana = %d", mediana);

    //Moda => valor que mais se repete na sequência de números encontrados
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