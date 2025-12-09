#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contato {
    char nome[41];
    char telefone[16];
    char celular[16];
    char email[41];
    int data[5];
}; typedef struct contato Contato;

struct elemento {
    Contato info;
    struct elemento* proximo;
}; typedef struct elemento Elemento;

Elemento* criar_agenda(void) {
    return NULL;
}

Elemento* inserir_contato(Elemento *e, Contato *c) {
    Elemento* novo;
    Elemento* ant = NULL;
    Elemento* p = e;

    while ( p != NULL && strcmp(p->info.nome, c->nome) < 0 ) {

        ant = p;
        p = p->proximo;

    }

    novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = c;

    if ( ant == NULL ) {
        novo->proximo = e;
        e = novo;
    }
    else {
        novo->proximo = ant->proximo;
        ant->proximo = novo;
    }
    return e;
}

void lista_contatos(Elemento *raiz) {
    if (raiz == NULL) {
        printf("Lista de contatos:\n");
    }
    else {
        imprimeLista(raiz->proximo);
        printf("%s\n", raiz->info.nome);
        printf("%s\n", raiz->info.telefone);
        printf("%s\n", raiz->info.celular);
        printf("%s\n", raiz->info.email);
        printf("%d\n", raiz->info.data);
    }
}

int main() {

    Elemento *raiz;
    Contato *c;
    
    raiz = criar_agenda();

    c->nome = "Felipe";
    c->telefone = "89994460056";
    c->celular = "nenhgum";
    c->email = "FELIPE@GMAIL>COM";
    c->data = 1234;

    raiz = inserir_contato(raiz, c);

    return 0;
}