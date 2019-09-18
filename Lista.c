
#include "Lista.h"
#include <stdlib.h>
#include <stdio.h>

void FLVazia(TLista *pLista){
        pLista->pLinha = (TCelula*) malloc(sizeof(TCelula));
        pLista->pLinha->linha = -1;
        pLista->pLinha->coluna = -1;
        pLista->pLinha->direita = pLista->pLinha;
        pLista->pColuna = pLista->pLinha;
        pLista->pLinha->baixo = pLista->pColuna;

    TCelula *aux = pLista->pColuna;
    for (int i = 0; i < 4; ++i) {
        aux->direita = malloc(sizeof(TCelula));
        aux = aux->direita;
        aux->direita = pLista->pColuna;
        aux->baixo = aux;
        aux->coluna = -1;
    }

    aux = pLista->pLinha;
    for (int j = 0; j < 4; ++j) {
        aux->baixo = malloc(sizeof(TCelula));
        aux = aux->baixo;
        aux->baixo = pLista->pLinha;
        aux->direita = aux;
        aux->linha = -1;
    }
}

void LInsere(TLista *pLista, TCompra *compra){

}

void LImprime(TLista *pLista){

}
