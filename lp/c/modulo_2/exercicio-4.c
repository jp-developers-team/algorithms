#include<stdio.h>

#include<stdlib.h>

// Recuperando valores da ponteiro/memória "*", "*alocar" ou "num*" ou "*num"
int *alocar(){
    int *memoria = (int*) malloc(sizeof(int));

    return memoria;
}

int main(){
    int *num = alocar();

    if(num != NULL){
        printf("\n Informe um número inteiro ");
        scanf("%d", num);

        printf("\n Número informado é: %d \n", *num);
    }

    return 0;
}