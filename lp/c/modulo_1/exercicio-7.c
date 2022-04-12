#include<stdio.h>

// Manipulando dados de um vetor
int main(){
    int num[2] = {10, 20};

    printf("\n Utilizando o índice do vetor");
    printf("\n Recuperando e guardando na memória o valor do índice na posição [0]: %d", &num[0]);
    printf("\n Utilizando o ponteiro ou o cursor: %d", *num);
    printf("\n");

    return 0;
}