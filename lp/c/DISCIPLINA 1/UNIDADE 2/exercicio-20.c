#include<stdio.h>

#define VET_TAM 5

// Procurando um NÚMERO QUALQUER dentro de um "VETOR" específico
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