/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 1 - Procedimentos e funções
* Aulas:          [O que são funções ou procedimentos?], [Escopo e passagem de parâmetros] e [Recursividade]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Cálculo de média da idade de três pessoas
*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
    // Variáveis e seus valores
    int idade[3] = {0, 0, 0};
    float media = 0.0;
    bool option = true;

    while (option == true)
    {
        // Informa o usuário para entrar com o primeiro valor
        printf("\n Informe a idade da pessoa 1: ");
        // Captura o valor informado pelo usuário
        scanf("%d", &idade[0]);

        // Informa o usuário para entrar com o segundo valor
        printf("\n Informe a idade da pessoa 2: ");
        // Captura o valor informado pelo usuário
        scanf("%d", &idade[1]);

        // Informa o usuário para entrar com o terceiro valor
        printf("\n Informe a idade da pessoa 3: ");
        // Captura o valor informado pelo usuário
        scanf("%d", &idade[2]);

        // Cálculo matemático para para a meia, apartir dos três valores informados pelo usuário
        media = (idade[0] + idade[1] + idade[2]) / 3;

        // Apresenta o resultado
        printf("\n Média de idade = %.2f", media);
        printf("\n");

        // Informa o usuário para entrar com o terceiro valor
        printf("\n Deseja realizar um novo cálculo? \n 1 (UM) para SIM \n 0 (ZERO) para NÃO: ");
        // Captura o valor informado pelo usuário
        scanf("%d", &option);

        if (option == false){
            // Despede-se do usuário
            printf("\n Tudo bem, você escolheu NÃO, volte sempre!");
            printf("\n");
            break;
        }else{
            // Informa que vamos continuar com o novo cálculo
            printf("\n Ok, você escolheu SIM, prosseguindo então!");
            printf("\n");
        }
    }
    
    return 0;

}
