#include<stdio.h>;

// Função recursiva usando fatorial
int fatorial(int valor){
    if(valor != 1){
        return valor * fatorial(valor - 1);
    }else{
        return valor;
    }
}

int main(){
    int n, resultado;


    printf("\n Digite um número inteiro positivo: ");
    scanf("%d", &n);

    resultado = fatorial(n);

    printf("\n Reultado = %d \n", resultado);

    return 0;
}