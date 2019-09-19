
typedef struct{
    int quantidade;
    char data[10];
}TCompra;

typedef struct CelulaCompra{
    int somaQtdCompras;
    struct CelulaCompra *pProx;
    TCompra compra;
}TCelulaCompra;

typedef struct {
    TCelulaCompra *pPrim;
    TCelulaCompra *pUlt;
}TListaDeCompra;

void iniciaLista(TListaDeCompra *lista);
void alocaCelulaCompra(TCompra *compra, TListaDeCompra *pLista);
void imprimeCompras(TListaDeCompra *lista);
int somaQtdCompras(TListaDeCompra *lista);

