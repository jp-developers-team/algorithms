/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 2 - Listas
* Aulas:          [O que são as Estruturas de Dados do tipo Lista?], [Pilhas] e [Filas]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Trabalhando com Pilhas
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

struct No {
    int info;
    struct No* proximo;
};

struct Pilha {
    struct No* topo;
    int tamanho;
};

struct Pilha* criar() {
    struct Pilha* nova_pilha = (struct Pilha*) malloc(sizeof(struct Pilha));
    if (nova_pilha != NULL) {
        nova_pilha->topo = NULL;
        nova_pilha->tamanho = 0;
    }
    return nova_pilha;
}

void empilhar(struct Pilha* p, int item) {
    assert(p != NULL);    
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    if (novo_no != NULL) {
        novo_no->info = item;
        novo_no->proximo = p->topo;
        p->topo = novo_no;
        p->tamanho++;
    }
}

int desempilhar(struct Pilha* p) {
    assert(p != NULL);    
    assert(p->topo != NULL);
    struct No* aux = p->topo;
    int elemento = aux->info;
    p->topo = aux->proximo;
    p->tamanho--; 
    free(aux);
    return elemento;    
}

int topo(struct Pilha* p) {
    assert(p != NULL);
    assert(p->topo != NULL);
    struct No* topo = p->topo;
    return topo->info;
}

int tamanho(struct Pilha* p) {
    assert(p != NULL);
    return p->tamanho;
}

bool vazia(struct Pilha* p) {
    assert(p != NULL);
    return (p->topo == NULL);
}

void liberar(struct Pilha* p) {
    assert(p != NULL);
    while(vazia(p) == false) {
       desempilhar(p); 
    }
    free(p);
}

int main() {

    return 0;
}