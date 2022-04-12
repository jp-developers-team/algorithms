#include<stdio.h>

// Trabalhando com funções, chamando a função que calcula o quadrado de um número qualquer
float calcular(){
    float num;

    printf("\n Digite um número ");
    scanf("%f", &num);

    return num * num;
}

int main(){
    float resultado = 0;

    resultado = calcular();

    printf("\n O quadrado [x²] do número digitado é: %.2f \n", resultado);

    return 0;
}