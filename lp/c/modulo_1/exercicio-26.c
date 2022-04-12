#include<stdio.h>
#include<ctype.h>

// Trabalhando com constant
#define NOME_TAM 30

// Trabalhando com PARSE to UPPERCASE
int main(){
    char nome[NOME_TAM];
    int i;

    printf("\n Informe o nome do(a) aluno(a): ");
    fflush(stdin);
    fgets(nome, NOME_TAM, stdin);

    printf("\n Esse é nome ANTES da mudança: %s", nome);

    for(int i = 0; i < NOME_TAM; i++){
        nome[i] = toupper(nome[i]);
    }

    printf("\n Esse é nome DEPOIS da mudança: %s", nome);

    return 0;
}