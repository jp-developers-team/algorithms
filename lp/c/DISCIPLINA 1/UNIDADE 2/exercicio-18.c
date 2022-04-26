/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Cálculo da Média com laço de repetição "DO WHILE"
*/

#include<stdio.h>

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