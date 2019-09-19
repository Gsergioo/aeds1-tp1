#include "Compra.h"
#include <stdlib.h>
#include <stdio.h>

//void QuantidadeCompraPorProduto()

//Criar as celulas que vao conter os produtos e armazena os dados da compra;
void alocaCelulaCompra(TCompra *compra, TListaDeCompra *pLista){
    pLista->pUlt->pProx = (TCelulaCompra *) malloc(sizeof(TCelulaCompra));
    pLista->pUlt = pLista->pUlt->pProx;
    pLista->pUlt->pProx = NULL;

    pLista->pUlt->compra = *compra;

}
//Criar as celulas cabecas
void iniciaLista(TListaDeCompra *lista){
    lista->pPrim = (TCelulaCompra* )malloc(sizeof(TCelulaCompra));
    lista->pUlt = lista->pPrim;
    lista->pUlt->pProx = NULL;
}

void imprimeLista(TListaDeCompra *lista){
    TCelulaCompra *aux = lista->pPrim->pProx;
    while (aux != NULL){
        printf("Quantidade: %d ; Data: %s", aux->compra.quantidade, aux->compra.data);
        aux = aux->pProx;
    }
}

int somaQtdCompras(TListaDeCompra *lista){
    TCelulaCompra *aux = lista->pPrim;
    int soma = 0;
    while (aux != NULL){
        soma += lista->pUlt->compra.quantidade;
        aux = lista->pUlt->pProx;
    }

    return soma;
}