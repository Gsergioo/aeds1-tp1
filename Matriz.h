
#include "Compra.h"

typedef struct Celula{
    struct Celula *direita, *baixo;
    int linha, coluna;
    TListaDeCompra compras;
}TCelula;

typedef struct{
    TCelula *pLinha;
    TCelula *pColuna;
}TMatriz;


void FMatVazia(TMatriz *pLista);
void LInsere(TMatriz *pLista, TCompra *compra, int i, int j);
void LImprime(TMatriz *pLista);
void quantidadeCompraPorProduto(TMatriz *pMatriz);