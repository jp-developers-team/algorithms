#include<stdio.h>

// Função fibonacci - Recursivo
int fibonacci(int n){
    if(n == 0){
        return 0;
    }else{
        if(n == 1){
            return 1;
        }else{
            return fibonacci(n - 1) + fibonacci(n -2);
        }
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