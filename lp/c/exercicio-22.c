#include<stdio.h>

// Trabalhando com MATRIZ
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