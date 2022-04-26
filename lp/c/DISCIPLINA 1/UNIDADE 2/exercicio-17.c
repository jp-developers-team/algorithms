/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      MENU de opções com laço de repetição "DO WHILE"
*/

#include<stdio.h>

int main(){
    float soma = 0, valor;
    int opcao;

    do {
        printf("\n MENU DE OPÇÕES \n");
        printf("\n 1. DEPÓSITO ");
        printf("\n 2. SAQUE ");
        printf("\n 3. SALDO ");
        printf("\n 4. SAIR \n");
        printf("\n Selecione uma das opções acima citado ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("\n Informe o valor a ser depositado: ");
                scanf("%f", &valor);
                //soma = valor = valor;
                soma += valor;
                break;
            case 2:
                printf("\n Informe o valor desejado para saque: ");
                scanf("%f", &valor);
                //soma = valor -  valor;
                soma -= valor;
                break;
            case 3:
                printf("\n Saldo atual é de %.2f", soma);
                break;
            case 4:
                printf("\n Saindo... ");
                break;
            default:
                printf("\n Opção inválida, tente novamente! ");
                break;
        }

    } while(opcao != 4);

    printf("\n Fim das operações. \n");

    return 0;
}