#include <stdio.h>
#include <stdlib.h>

struct intnode {
    int dado;
    struct intnode *proximo;
};

typedef struct intnode IntNode;

void imprimeLista(IntNode *raiz) {
    if (raiz == NULL) {
        printf("Inicializando lista\n");
    }
    else {
        imprimeLista(raiz->proximo);
        printf("%d\n", raiz -> dado);
    }
}

// void imprimeLista(IntNode *raiz) {
//     IntNode *pnode;
//     pnode = raiz;
//     while (pnode != NULL) {
//         printf("%d\n", pnode -> dado);
//         pnode = pnode -> proximo;
//     }
// }

IntNode *insere_int(int i, IntNode *pinicio){
    IntNode *pi;
    pi = (IntNode *)malloc(sizeof(IntNode));
    if (pi){ 
        pi -> dado = i;
        pi -> proximo = pinicio;
        pinicio = pi;
    }
    return pi;
}

IntNode *removeUltimoItem(IntNode *pinicio) {
    IntNode *aux;
    aux = pinicio;
    if (aux != NULL) {
        pinicio = pinicio -> proximo;
        free(aux);
    }
    return pinicio;
}

int main() {

    IntNode *raiz; 
    raiz = NULL;

/*    raiz = (IntNode *)malloc(sizeof(IntNode));
    raiz -> dado = 7;
    raiz -> proximo = NULL;
*/
    
    raiz = insere_int(7, raiz);
    raiz = insere_int(4, raiz);
    raiz = insere_int(8, raiz);
    raiz = insere_int(10, raiz);


/*  IntNode *pnode;

    pnode = (IntNode *)malloc(sizeof(IntNode));
    pnode -> dado = 11;
    pnode -> proximo = NULL;
    raiz -> proximo = pnode;

*/

    raiz = removeUltimoItem(raiz);
    imprimeLista(raiz);

}