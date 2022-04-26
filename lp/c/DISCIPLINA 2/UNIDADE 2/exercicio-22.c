/*
* Instituto:      Ampli Universidade - Pitágoras Universidade
* Url:            https://ava.ampli.com.br/bacharelado/disciplina/algoritmos-e-programacao-es-797fb
* Disciplina:     Algoritmos e Programação Estruturada - Programação Estruturada para Dev
* Módulo:         UNIDADE 2 - Listas
* Aulas:          [O que são as Estruturas de Dados do tipo Lista?], [Pilhas] e [Filas]
* Período estudo: 11/04/2022 - 24/04/2022
* Período prova:  25/04/2022 - 23/07/2022
* Aluno:          Helington Jose Procopio
* Descrição:      Entendendo o conceito de Listas simplesmente ligada, no caso aqui estamos criando uma lista vazia mesmo
*/

#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

struct No {
    struct No* proximo;
    int info;
};

struct Lista {
    struct No* inicio;
    int tamanho;
};

struct Lista* criar() {
    struct Lista* nova_lista = (struct Lista*) malloc(sizeof(struct Lista));

    if (nova_lista != NULL) {
        nova_lista->inicio = NULL;
        nova_lista->tamanho = 0;
    }
    return nova_lista;
}

bool vazia(struct Lista* li) {
    assert(li != NULL);

    if (li->inicio == NULL) {
        return true;
        printf("\n SIM, a lista está vazia! \n");
    } else {
        return false;
        printf("\n NÃO, a lista não está vazia! \n");
    }
}

int main() {
   struct Lista* minha_lista = criar();

   if (vazia(minha_lista) == true) {
       printf("\n OK, lista vazia! \n");
   } else {
       printf("\n Ops... algo deu errado! \n");
   } 
   
   return 0;
}
