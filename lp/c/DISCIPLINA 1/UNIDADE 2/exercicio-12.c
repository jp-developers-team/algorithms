/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Checa se foi aprovado ou reprovado ou entrou em recuperação
*/

#include<stdio.h>

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