#include<stdio.h>

// Função para gerar números aleatórios de 0 até 99
int * gerarRandomico(){
    static int r[10];
    int a;

    for(a = 0; a < 10; a++){
        r[a] = rand() % 100;

        printf("\n r[%d] = %d", a, r[a]);
    }

    return r;
}

int main(){
    int * p;
    int i;

    p = gerarRandomico();

    for(i = 0; i < 10; i++){
        printf("\n p[%d] = %d", i, p[i]);
    }

    printf("\n");

    return 0;
}