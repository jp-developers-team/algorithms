#include<stdio.h>

// Verifica se o dígito "N" é um número primo
int ehPrimo(int n){
    return ehPrimoAux(n, 2);
}

int ehPrimoAux(int n, int x){
    if(n == x){
        return 1;
    }else if(n % x == 0){
        return 0;
    }else{
        return ehPrimoAux(n, x + 1);
    }
}

int main(){
    int n, resultado;

    printf("\n Digite um número inteiro positivo: ");
    scanf("%d", &n);

    resultado = ehPrimo(n);

    if(resultado == 1){
        printf("\n O dígito %d SIM, ele é um número primo : ", n);
        printf("\n");
    }else{
        printf("\n O dígito %d ele, NÃO é um número primo : ", n);
        printf("\n");
    }

    return 0;
}