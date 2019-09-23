#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char data[10];
    int quantidade;
} TCompra;

typedef struct CelulaCompra{
    struct CelulaCompra *pProx;
    TCompra compra;
}TCelulaCompra;

typedef struct {
    TCelulaCompra *pPrim;
    TCelulaCompra *pUlt;
}TListaDeCompra;

void IniciaLista(TListaDeCompra *lista);
void InsereCelulaCompra(TCompra *compra, TListaDeCompra *pLista);
void ImprimeCompras(TListaDeCompra *lista);
int SomaQtdCompras(TListaDeCompra *lista);
