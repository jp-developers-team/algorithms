#include<stdio.h>;

// Recursividade em cauda, empilhamento
int fatorialCauda(int n){
    return fatorialAux(n, 1);
}

// Fatorial auxiliar, manipulando valore de "fatorialCauda"
int fatorialAux(int n, int parcial){
    if(n != 1){
        return fatorialAux(n -1, parcial * n);
    }else{
        return parcial;
    }
}

int main(){
    int n, resultado;

    printf("\n Digite um número inteiro positivo: ");
    scanf("%d", &n);

    resultado = fatorialCauda(n);

    printf("\n Resultado = %d \n", resultado);

    return 0;
}