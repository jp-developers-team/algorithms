/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 2 - Listas
* Aulas:          [O que são as Estruturas de Dados do tipo Lista?], [Pilhas] e [Filas]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com Listas, obtendo a posição menor
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

// strruct "no"
struct No {
    int info; // result_no
    struct No* anterior; // down_no
    struct No* proximo; // up_no
};

// struct "ListaDupla"
struct ListaDupla {
    int tamanho; // size_list
    struct No* inicio; // start_list
    struct No* fim; // end_list
};

// Criando uma instancia de "ListaDupla"
struct ListaDupla* criar(){
    struct ListaDupla* nova_lista = (struct ListaDupla*) malloc(sizeof(struct ListaDupla));

    if(nova_lista != NULL){
        nova_lista->inicio = NULL;
        nova_lista->fim = NULL;
        nova_lista->tamanho = 0;
    }

    return nova_lista;
}

bool vazia(struct ListaDupla* li){
    assert(li != NULL);

    if(li->inicio == NULL){
        return true;
    }else{
        return false;
    }
}

bool existe(struct ListaDupla* li, int item){
    assert(li != NULL);
    
    struct No* aux = li->inicio;

    while(aux != NULL){
        if(aux->info == item){
            return true;
        }
        aux = aux->proximo;
    }

    return false;
}

int posicao_menor(struct ListaDupla* li){
    assert(li != NULL);

    struct No* aux = li->inicio;

    int pos_menor = 0, menor = aux->info;

    for(int i = 0; i < li->tamanho; i++){
        if(aux->info < menor){
            pos_menor = i;
            menor = aux->info;
        }

        aux = aux->proximo;
    }

    return pos_menor;
}

// pos => posição que ocupará
// item => valor que será setado
void inserir(struct ListaDupla* li, int pos, int item){
    assert(li != NULL);
    assert(pos >= 0 && pos <= li->tamanho);

    struct No* novo_no = (struct No*) malloc(sizeof(struct No));

    novo_no->info = item;

    if(pos == 0){
        novo_no->anterior = NULL;
        novo_no->proximo = li->inicio;
        li->inicio = novo_no;

        if(li->fim == NULL){
            li->fim = novo_no;
        }
    }else if(pos == li->tamanho){
        novo_no->anterior = li->fim;
        novo_no->proximo = NULL;
        li->fim->proximo = NULL;
        li->fim = novo_no;
    }else{
        struct No* aux = li->inicio;

        for(int i = 0; i < pos -1; i++){
            aux = aux->proximo;
        }

        novo_no->anterior = aux;
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no;
    }

    li->tamanho++;
}

void imprimir(struct ListaDupla* li){
    assert(li != NULL);

    printf("\n Lista \n");

    struct No* aux = li->inicio;

    while(aux != NULL){
        printf("%d", aux->info);
        aux = aux->proximo;
    }
}

int tamanho(struct ListaDupla* li){
    assert(li != NULL);

    return li->tamanho;
}

int obter(struct ListaDupla* li, int pos){
    assert(li != NULL);
    assert(pos >= 0 && pos < li->tamanho);

    struct No* aux;

    if(pos == 0){
        aux = li->inicio;
    }else if(pos == li->tamanho -1){
        aux = li->fim;
    }else{
        aux = li->inicio;

        for(int i = 0; i < pos; i++){
            aux = aux->proximo;
        }
    }

    return aux->info;
}

int remover(struct ListaDupla* li, int pos){
    assert(vazia(li) == false);
    assert(pos >= 0 && pos < li->tamanho);

    struct No* aux = NULL;

    if(pos == 0){
        aux = li->inicio;
        li->inicio = aux->proximo;

        if(li->inicio ==  NULL){
            li->fim = NULL;
        }else{
            li->inicio->anterior = NULL;
        }
    }else if(pos == li->tamanho -1){
        aux = li->fim;
        li->fim = aux->anterior;
        li->fim->proximo = NULL;
    }else{
        struct No* ant = NULL;

        aux = li->inicio;

        for(int i = 0; i < pos; i++){
            ant = aux;
            aux = aux->proximo;
        }

        ant->proximo = aux->proximo;
        aux->proximo->anterior = ant;
    }

    int elemento = aux->info;
    li->tamanho--;

    free(aux);

    return elemento;
}

void liberar(struct ListaDupla* li){
    while(vazia(li) == false){
        remover(li, 0);
    }

    free(li);
}

int main(){
    struct ListaDupla* minha_lista = criar();

    inserir(minha_lista, 0, 5);
    inserir(minha_lista, 0, 3);
    inserir(minha_lista, 2, 6);
    inserir(minha_lista, 1, 4);

    imprimir(minha_lista);

    printf("\n");

    return 0;
}
