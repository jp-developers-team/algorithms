/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Cálculo de metros quadrados => cumprimento * largura
*/

#include<stdio.h>

int main(){
    float cumprimento, largura, resultado;
    int resposta;

    cumprimento = 0;
    largura = 0;
    resultado = 0;

    do {
        printf("\n Digite o cumprimento do terreno: ");
        scanf("%f", &cumprimento);

        printf("\n Digite a largura do terreno: ");
        scanf("%f", &largura);

        resultado = cumprimento * largura;

        printf("\n O terreno tem %.2f m de cumprimento: ", cumprimento);
        printf("\n O terreno tem %.2f m de largura: ", largura);
        printf("\n Totalizando %.2f m2", resultado);

        printf("\n Digite [1] para CONTINUAR ou [2] para SAIR ");
        scanf("%d", &resposta);

    } while(resposta == 1);

    return 0;
}