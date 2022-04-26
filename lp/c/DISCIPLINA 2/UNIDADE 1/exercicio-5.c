/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Cálculo de IMC => Índice de Massa Corporal
*/

#include<stdio.h>

float calcImc(){
    float peso, altura, imc;

    printf("\n Informe o seu peso em [Kg]: ");
    scanf("%f", &peso);

    printf("\n Informe a sua altura em [m]: ");
    scanf("%f", &altura);

    printf("\n CÁLCULO DE (IMC = PESO/ALTURA²) \n");

    printf("\n DADOS INFORMADOS");
    printf("\n PESO: %.2f", peso);
    printf("\n ALTURA: %.2f", altura);

    imc = peso / (altura * altura);

    printf("\n IMC = %.2f \n", imc);

    return imc;
}

float main(){
    float imc = calcImc();

    if(imc < 18.5){
        printf("\n IMC = %.2f você está [ABAIXO DO PESO] \n", imc);
    }else if(imc < 24.9){
        printf("\n IMC = %.2f está com [PESO IDEAL] \n", imc);
    }else{
        printf("\n IMC = %.2f você está com [SOBREPESO] \n", imc);
    }

    //return 0.0;
}