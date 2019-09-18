
#include "Lista.h"
#include <stdlib.h>
#include <stdio.h>

void FLVazia(TLista *pLista){
        pLista->pLinha = (TCelula*) malloc(sizeof(TCelula));
        pLista->pLinha->linha = -1;
        pLista->pLinha->coluna = -1;
        pLista->pLinha->direita = pLista->pLinha;
        pLista->pLinha->baixo = pLista->pColuna;


    for (int i = 0; i < 4; ++i) {
        pLista->pColuna->direita = malloc(sizeof(TCelula));
        pLista->pColuna = pLista->pColuna->direita;
        pLista->pColuna->direita = pLista->pLinha;
        pLista->pColuna->coluna = -1;
        pLista->pColuna->baixo = pLista->pColuna;
        pLista->pColuna->linha = 19;
    }
}

int EhVazia(TLista *pLista){
    if(pLista->pColuna == pLista->pLinha){
        return 1;
    } else{
        return 0;
    }
}

void LInsere(TLista *pLista, TCompra *compra){

}

void LImprime(TLista *pLista){
    for (TCelula* i = pLista->pLinha; i < pLista->pLinha->direita; i++) {
        printf("Coluna: %d, Ender: %p\n", pLista->pColuna->linha, pLista->pColuna->baixo);
    }
/*
    for (TCelula* i = pLista->pLinha; i < pLista->pColuna; i++) {
        printf("Coluna: %d\n", pLista->pColuna->coluna);
    }
*/
}
