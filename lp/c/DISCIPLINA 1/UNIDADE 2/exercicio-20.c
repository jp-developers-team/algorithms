/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Procurando um NÚMERO QUALQUER dentro de um "VETOR" específico
*/

#include<stdio.h>

#define VET_TAM 5

int main(){
    int vetor[VET_TAM];
    int num, i = 0, achou = 0;

    // Preenchendo o vetor
    for (int i = 0; i < VET_TAM; i++){
        printf("\n Entre com um número inteiro ");
        scanf("%d", &vetor[i]);
    }

    printf("\n Informe o número à ser encontrado ");
    scanf("%d", &num);

    while(i < VET_TAM){
        if(vetor[i] == num){
            achou = 1;
            break;
        }
        i++;
    }

    if(achou == 1){
        printf("\n O número %d foi encontrado na posição %d do vetor: ", num, i);
        printf("\n");
    }else{
        printf("\n O número %d não foi encontrado no vetor", num);
        printf("\n");
    }
    
    return 0;
}