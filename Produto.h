#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int quantidade;
    char data[10];
}TCompra;

void InsereProduto(TCompra  *compra, TCompra *compraAux);
void ImprimeProduto(TCompra *compra);
