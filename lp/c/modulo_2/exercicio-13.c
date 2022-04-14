#include<stdio.h>

// Trabalhando com funções, com passagem de parâmetros do tipo vetor[]
void inserir(int a[]){
    int i = 0;
    for(i = 0; i < 3; i++){
        printf("\n Digite o valor para o índice [%d] ", i);
        scanf("%d", &a[i]);
    }
}

void imprimir(int b[]){
    int i = 0;
    for(i = 0; i< 3; i++){
        printf("\n Número no índice[%d] = %d", i, (2*b[i]));
    }
}

int main(){
    int numeros[3];

    printf("\n Preenchendo o vetor... \n");

    inserir(numeros);

    printf("\n Aplicando o dobro dos valores informados anteriormente ");

    imprimir(numeros);

    printf("\n");

    return 0;

}