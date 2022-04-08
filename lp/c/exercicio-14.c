#include<stdio.h>

// Trabalhando com laço de repetição "WHILE"
int main(void){
    char parar;
    float nota;

    printf("\n Informe a nota final do aluno: ");
    scanf("%f", &nota);

    while(nota < 0 || nota > 10){
        printf("\n Valor informado é inválido, Informe a nota final do aluno! ");
        scanf("%f", &nota);
    }

    return 0;
}