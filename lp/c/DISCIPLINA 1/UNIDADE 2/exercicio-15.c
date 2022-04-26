/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com laço de repetição "DO WHILE"
*/

#include<stdio.h>

int main(void){
    char parar;
    float nota;

    do {
        printf("\n Informe a nota final do aluno [min: 0, max: 10] ");
        scanf("%f", &nota);
    }while(nota < 0 || nota > 10);
    
    return 0;
}