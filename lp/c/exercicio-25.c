#include<stdio.h>

// Trabalhando com MATRIZ
int main(){
    int opcao, numVoo, reservou, mat[3][5] = {
        1, 1, 1, 0, -1,
        1, 1, 1, 1, 1,
        0, 0, -1, -1, -1
    };

    do{
        printf("\n 1 - Reservar voo \n 2 - Sair \n Informe a opção desejada ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("\n Informe o número do voo [1 à 3]: ");
                scanf("%d", &numVoo);

                reservou = 0;

                if(numVoo >= 1 && numVoo <= 3){
                    for(int i = 0; i < 5 && reservou == 0; i++){
                        if(mat[numVoo - 1][i] == 0){
                            reservou = 1;
                            mat[numVoo - 1][i] = 1;
                        }
                    }

                    if(reservou == 1){
                        printf("\n Seu voo foi reservado com sucesso! \n");
                    }else{
                        printf("\n Não há poltronas disponíveis nesse voo! \n");
                    }
                }else{
                    printf("\n Você inseriu uma opção inválida! \n");
                }

                break;

            case 2:
                printf("\n Saindo...! \n");
                break;

            default:
                printf("\n Você inseriu uma opção inválida! \n");
        }

    }while(opcao != 2);

    return 0;
}