#include<stdio.h>

// Trabalhando com MATRIZ
int main(){
    int linha, coluna;
    int matriz[3][3];
    int eh_diagonal = 1;

    for (linha = 0; linha < 3; linha++){


        for(coluna = 0; coluna < 3; coluna++){
            printf("\n Digitar os valores da matriz [linha %d, coluna %d] ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }

        for(linha = 0; linha < 3; linha++){

            for(coluna = 0; coluna < 3; coluna++){

                if(coluna != linha && matriz[linha][coluna] != 0){
                    eh_diagonal = 0;
                }

            }

            if(eh_diagonal == 1){
                printf("\n A sua MATRIZ é na DIAGONAL ");
            }else{
                printf("\n A sua MATRIZ NÃO é na DIAGONAL ");
            }

            return 0;

        }

    }
    
}