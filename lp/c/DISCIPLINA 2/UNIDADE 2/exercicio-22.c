#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

// Entendendo o conceito de Lista simplesmente ligada, no caso aqui estamos criando apenas aprendendo a criar uma lista vazia mesmo
struct No {
    int info;
    struct No* proximo;
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
    } else {
        return false;
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
