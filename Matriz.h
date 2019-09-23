#include "Compra.h"

typedef struct Celula{
    struct Celula *direita, *baixo;
    int linha, coluna;
    TListaDeCompra compras;
    int produtosTotal;
}TCelula;

typedef struct{
    TCelula *pLinha;
    TCelula *pColuna;
}TMatriz;


void FazMatrizVazia(int i, int j, TMatriz *pLista);
TListaDeCompra* InsereMatriz(TMatriz* matriz, int i, int j );
void ImprimeMatriz(TMatriz *pLista);
void QuantidadeCompraPorProduto(TMatriz *matriz);
void QuantidadeCompraPorCliente(TMatriz* matriz);

void leMatrizArquivo(FILE *arq, TMatriz *pMatriz, TListaDeCompra *pListaCompra, TCompra *compra);
