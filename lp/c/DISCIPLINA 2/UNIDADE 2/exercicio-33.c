/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 2 - Listas
* Aulas:          [O que são as Estruturas de Dados do tipo Lista?], [Pilhas] e [Filas]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com Filas
*/

#include <stdio.h>    // para operações de entrada e saída
#include <stdlib.h>   // para alocação dinâmica de memória
#include <stdbool.h>  // para uso do tipo de dados “bool”
#include <assert.h>   // para uso da instrução “assert”

struct No {
    int info;
    struct No* proximo;
};

struct Fila {
    struct No* inicio;
    struct No* fim;
    int tamanho;
};


struct Fila* criar() {
    struct Fila* nova_fila = (struct Fila*) malloc(sizeof(struct Fila));
    if (nova_fila != NULL) {
        nova_fila->inicio = NULL;
        nova_fila->fim = NULL;
        nova_fila->tamanho = 0;
    }
    return nova_fila;
}

void enfileirar(struct Fila* f, int item) {
    assert(f != NULL);    
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    if (novo_no != NULL) {
        novo_no->info = item;
        novo_no->proximo = NULL;

	if (f->fim != NULL) {
            f->fim->proximo = novo_no;   
        } else {        
            f->inicio = novo_no;
        }
        f->fim = novo_no;
        f->tamanho++;
    }
}

int desenfileirar(struct Fila* f) {
    assert(f != NULL);    
    assert(f->inicio != NULL);
    struct No* aux = f->inicio;
    int elemento = aux->info;
    f->inicio = aux->proximo;
    if (f->inicio == NULL) {
        f->fim = NULL;    
    }
    f->tamanho--; 
    free(aux);
    return elemento;    
}

bool vazia(struct Fila* f) {
    assert(f != NULL);        
    return (f->inicio == NULL);    
}

int tamanho(struct Fila* f) {
    assert(f != NULL);        
    return f->tamanho;    
}

int inicio(struct Fila* f) {
    assert(f != NULL);     
    assert(f->inicio != NULL);         
    return f->inicio->info;    
}

void liberar(struct Fila* f) {
    assert(f != NULL);     
    while(f->inicio != NULL) {
        desenfileirar(f); 
    }
    free(f);    
}

int josephus(struct Fila* f, int n) {
    while(tamanho(f) > 1) {
        for(int i = 0; i < n; i++) { 
            enfileirar(f, desenfileirar(f));
        } 
        desenfileirar(f);
    }
    return desenfileirar(f);
}

int main() {
    struct Fila* minha_fila = criar();
    enfileirar(minha_fila, 1);
    enfileirar(minha_fila, 2);
    enfileirar(minha_fila, 3);
    enfileirar(minha_fila, 3);
    printf("Soldado salvo: %d ", josephus(minha_fila, 3));
    liberar(minha_fila);

    printf("\n");

    return 0;
}