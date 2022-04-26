/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Cálculo de Salário Líquido com desconto do IR e INSS
*/

#include<stdio.h>

int main(){
    float salario_bru, desc_inss, desc_ir, salario_liq;

    printf("\n Informe o salário bruto: ");
    scanf("%f", &salario_bru);

    // Calculando o desconto do INSS
    if(salario_bru <= 1045.0){
        desc_inss = salario_bru * 0.075;
    }else if(salario_bru <= 2089.60){
        desc_inss = salario_bru * ((float) 9/ (float) 100);
    }else if(salario_bru <= 3134.40){
        desc_inss = salario_bru * 0.12;
    }else{
        desc_inss = salario_bru * 0.14;
    }

    // Calculando o desconto de IR
    if(salario_bru <= 1903.98){
        desc_ir = 0;
    }else if(salario_bru <= 2826.65){
        desc_ir = salario_bru * 0.075;
    }else if(salario_bru <= 3751.05){
        desc_ir = salario_bru * 0.15;
    }else if(salario_bru <= 4664.68){
        desc_ir = salario_bru * 0.225;
    }else{
        desc_ir = salario_bru * 0.275;
    }

    salario_liq = ((salario_bru - desc_inss) - desc_ir);

    printf("\n Salário base bruto: %.2f", salario_bru);
    printf("\n Desconto de INSS: %.2f", desc_inss);
    printf("\n Desconto de IR: %.2f", desc_ir);
    printf("\n Salário líquido %.2f",  salario_liq);
    printf("\n");

    return 0;
}