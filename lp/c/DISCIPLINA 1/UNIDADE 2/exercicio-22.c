/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-5d87d
* Disciplina:     Algoritmos e Programação Estruturada - Algoritmos para Dev
* Módulo:         UNIDADE 2 - Estruturas de decisão condicionais
* Aulas:          [Tomada de decisões], [Estruturas de repetição determinísticas] e [Operações e expressões]
* Período estudo: 28/03/2022 - 10/04/2022
* Período prova:  11/04/2022 - 09/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com MATRIZ
*/

#include<stdio.h>

int main(){
    int linha, coluna;
    int matriz[3][3];

    for (linha = 0; linha < 3; linha++){

        for(coluna = 0; coluna < 3; coluna++){
            printf("\n Digitar os valores da matriz para [linha %d, coluna %d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }

    }

    printf("\n Veja a sua MATRIZ \n");

    for(linha = 0; linha <= 2; linha++){
        
        // \t => TABULAÇÃO
        for(coluna = 0; coluna < 3; coluna++){
            printf("\t%d\t", matriz[linha][coluna]);
        }

        printf("\n");

    }

    return 0;
}