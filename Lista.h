
#include "Compra.h"


typedef struct Celula{
    struct Celula *direita, *baixo;
    int linha, coluna;
    //double valor;
}TCelula;

typedef struct{
    TCelula *pLinha;
    TCelula *pColuna;
}TLista;

void FLVazia(TLista *pLista);
int EhVazia(TLista *pLista);
void LInsere(TLista *pLista, TCompra *compra);
void LImprime(TLista *pLista);
