#include<stdio.h>

// Cálculo de IMC => Índice de Massa Corporal
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