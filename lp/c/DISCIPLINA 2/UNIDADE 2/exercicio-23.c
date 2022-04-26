/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 2 - Listas
* Aulas:          [O que são as Estruturas de Dados do tipo Lista?], [Pilhas] e [Filas]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com Listas
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

// Primeiro Nó
struct No {
    struct No* proximo;
    int info;
};

struct Lista {
    struct No* inicio;
    int tamanho;
};

struct Lista* criar(){
    struct Lista* nova_lista = (struct Lista*) malloc(sizeof(struct Lista));

    if(nova_lista != NULL){
        nova_lista->inicio = NULL;
        nova_lista->tamanho = 0;
    }

    return nova_lista;
}

bool vazia(struct Lista* li){
    assert(li != NULL);

    if(li->inicio == NULL){
        return true;
        printf("\n SIM, a lista está vazia! \n");
    }else{
        return false;
        printf("\n NÃO, a lista não está vazia! \n");
    }
}

void inserir(struct Lista* li, int pos, int item){
    assert(li != NULL);
    assert(pos >= 0 && pos <= li->tamanho);

    struct No* novo_no = (struct No*) malloc(sizeof(struct No));

    novo_no->info = item;
    if(pos == 0){
        novo_no->proximo = li->inicio;
        li->inicio = novo_no;
    }else{
        struct No* aux = li->inicio;

        for(int i = 0; i < pos - 1; i++){
            aux = aux->proximo;
        }
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no;
    }
    li->tamanho++;
}

void imprimir(struct Lista* li){
    assert(li != NULL);

    printf("\n Lista \n");

    struct No* aux = li->inicio;

    for(int i = 0; i < li->tamanho; i++){
        printf("%d", aux->info);

        aux = aux->proximo;
    }
}

int main(){
    struct Lista* minha_lista = criar();

    inserir(minha_lista, 0, 5);
    inserir(minha_lista, 0, 3);
    inserir(minha_lista, 2, 6);
    inserir(minha_lista, 1, 0);
    inserir(minha_lista, 4, 7);
    inserir(minha_lista, 1, 2);
    inserir(minha_lista, 5, 6);
    inserir(minha_lista, 3, 4);

    imprimir(minha_lista);

    printf("\n");

    return 0;
}