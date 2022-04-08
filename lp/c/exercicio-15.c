#include<stdio.h>

//Trabalhando com laço de repetição "DO WHILE"
int main(void){
    char parar;
    float nota;

    do {
        printf("\n Informe a nota final do aluno [min: 0, max: 10] ");
        scanf("%f", &nota);
    }while(nota < 0 || nota > 10);
    
    return 0;
}