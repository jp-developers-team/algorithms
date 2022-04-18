#include<stdio.h>

// Cálculo da Média com laço de repetição "DO WHILE"
int main(){
    int quant_notas = 0, opcao;
    float nota, media, soma_notas = 0.0;

    do{
        printf("\n Digite a nota do aluno %d ", quant_notas + 1);        
        scanf("%f", &nota);

        quant_notas += 1;
        soma_notas += nota;

        printf("\n Digite [1] para informar OUTRA NOTA, ou [2] para ENCERRAR ");
        scanf("%d", &opcao);
        
    } while(opcao != 2);

    printf("\n Quantidade de notas %d", quant_notas);

    // PARSE  int to float (float) quant_notas
    media = soma_notas / (float) quant_notas;


    printf("\n Média de notas é: %.2f \n", media);
    
    return 0;
}