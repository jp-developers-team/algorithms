#include<stdio.h>

// Função fibonacci - NÃO Recursivo
int fibonacci(int n){
    int i, j, f;
    
    if(n == 0){
        return f = 0;
    }else if(n == 1){
        return i = 1;
    }else{
        i = 1;
        f = 0;

        for(j = 0; j < n; j++){
            f += i;
            i = f - i;
        }
    
        return f;
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