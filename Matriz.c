
#include "Matriz.h"
#include <stdlib.h>
#include <stdio.h>

void FMatVazia(TMatriz *pLista){
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


void LInsere(TMatriz *pLista, TCompra *compra, int i, int j){
    TCelula *aux, *aux2, *aux3;
    aux = pLista->pLinha;
    for (int linhas = 0; linhas < i; linhas++){
        aux = aux->baixo;
    }

    while (aux->direita->linha != -1){
        aux = aux->direita;
    }
    aux2 = aux->direita;
    aux->direita = (TCelula*) malloc(sizeof(TCelula));
    aux = aux->direita;
    aux->direita = aux2;
    aux->linha = i;
    //aux->chave = 10;
    aux3 = aux;
    aux = pLista->pLinha;
    for (int colunas = 0; colunas < j; colunas++){
        aux = aux->direita;
    }
    while(aux->baixo->coluna != -1){
        aux = aux->baixo;
    }
    aux2 = aux->baixo;
    aux->baixo = aux3;
    aux = aux->baixo;
    aux->coluna = j;
    aux->baixo = aux2;
}

void LImprime(TMatriz *pMatriz){
    TCelula *aux = NULL;
    //pMatriz->pLinha = pMatriz->pLinha->baixo;
    aux = pMatriz->pLinha->baixo;
    while(1){
        aux = aux->direita;
        if (aux->linha == -1){
            aux = aux->baixo;
        }

        else
            printf("Cliente: %d ; Produto: %d ; Ender: %p\n", aux->linha, aux->coluna, aux);
        if(aux == pMatriz->pColuna){
            break;
        }
    }
}
