#include<stdio.h>

// Função recursiva
int somaRecursiva(int valor){
    if(valor == 0){
        return valor;
    }else{
        return valor + somaRecursiva(valor -1);
    }
}

int main(){
    int n, resultado;

    printf("\n Digite um número inteiro: ");
    scanf("%d", &n);

    resultado = somaRecursiva(n);
    printf("\n Resultado = %d \n", resultado);

    return 0;
}