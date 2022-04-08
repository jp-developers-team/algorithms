#include<stdio.h>

// Checa se foi aprovado ou reprovado ou entrou em recuperação
int main(void){
    float nota_fiscal;

    printf("\n Informe a nota final do aluno: ");
    scanf("%f", &nota_fiscal);
    
    if(nota_fiscal >= 60){
        printf("\n Aluno está aprovado! \n");
    }else if(nota_fiscal >= 50){
        printf("\n Aluno entrou em recuperação! \n");
    }else{
        printf("\n Aluno foi reprovado! \n");
    }

    return 0;    
}