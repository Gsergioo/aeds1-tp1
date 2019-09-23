#include "Compra.h"

//void QuantidadeCompraPorProduto()

//Criar as celulas que vao conter os produtos e armazena os dados da compra;
void InsereCelulaCompra(TCompra *compra, TListaDeCompra *pLista){
    pLista->pUlt->pProx = (TCelulaCompra *) malloc(sizeof(TCelulaCompra));
    pLista->pUlt = pLista->pUlt->pProx;
    pLista->pUlt->pProx = NULL;
    pLista->pUlt->compra = *compra;

}
//Criar as celulas cabecas
void IniciaLista(TListaDeCompra *lista){
    lista->pPrim = (TCelulaCompra* )malloc(sizeof(TCelulaCompra));
    lista->pUlt = lista->pPrim;
    lista->pUlt->pProx = NULL;
}

void ImprimeCompras(TListaDeCompra *lista){
    TCelulaCompra *aux = lista->pPrim->pProx;
    while (aux != NULL){
        printf("Quantidade: %d ; Data: %s\n", aux->compra.quantidade, aux->compra.data);
        aux = aux->pProx;
    }
}

int SomaQtdCompras(TListaDeCompra *lista){
    TCelulaCompra* aux = lista->pPrim->pProx;
    int soma = 0;
    while (aux != NULL){
        soma += aux->compra.quantidade;
        aux = aux->pProx;
    }
    return soma;
}
