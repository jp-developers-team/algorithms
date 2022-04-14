#include<stdio.h>

float t1, t2;

// Trabalhando com variáveis do tipo global, chamando uma função sem parâmetros
float calcMedia(){
    return (t1 + t2)/2;
}

int main(){
    printf("\n Digite as duas temperaturas, digitar um após a outra: ");
    scanf("%f %f", &t1, &t2);

    printf("\n Fórmula calcMédia() => %.2f+%.2f/2 = %.2f \n", t1, t2, calcMedia());
    printf("\n A temperatura média é: %.2f C° \n", calcMedia());

    return 0;
}