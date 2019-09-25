#include "Matriz.h"
//#include <stdlib.h>
//#include "Compra.h"

void FazMatrizVazia(int i, int j, TMatriz *pLista){
        pLista->pLinha = (TCelula*) malloc(sizeof(TCelula));
        pLista->pLinha->linha = -1;
        pLista->pLinha->coluna = -1;
        pLista->pLinha->direita = pLista->pLinha;
        pLista->pColuna = pLista->pLinha;
        pLista->pLinha->baixo = pLista->pColuna;

    TCelula *aux = pLista->pColuna;
    for (int linhas = 0; linhas < j; ++linhas) {
        aux->direita = malloc(sizeof(TCelula));
        aux = aux->direita;
        aux->direita = pLista->pColuna;
        aux->baixo = aux;
        aux->coluna = -1;
    }

    aux = pLista->pLinha;
    for (int colunas = 0; colunas < i; ++colunas) {
        aux->baixo = malloc(sizeof(TCelula));
        aux = aux->baixo;
        aux->baixo = pLista->pLinha;
        aux->direita = aux;
        aux->linha = -1;
    }
}


TListaDeCompra* InsereMatriz(TMatriz *pLista, int i, int j){
    TCelula *auxPrincipal, *auxRef;
    auxPrincipal = pLista->pLinha;
    for (int linhas = 0; linhas < i; linhas++){
        auxPrincipal = auxPrincipal->baixo;
    }
    auxRef = auxPrincipal;
    while (auxRef->direita->linha != -1){
        auxRef = auxRef->direita;
    }
    auxRef->direita = (TCelula*) malloc(sizeof(TCelula));
    auxRef = auxRef->direita;
    auxRef->direita = auxPrincipal;
    auxRef->linha = i;
    auxPrincipal = pLista->pLinha;
    for (int colunas = 0; colunas < j; colunas++){
        auxPrincipal = auxPrincipal->direita;
    }
    auxRef->coluna = j;
    auxRef->baixo = auxPrincipal;
    while(auxPrincipal->baixo->coluna != -1)
            auxPrincipal = auxPrincipal->baixo;
    auxPrincipal->baixo = auxRef;
    IniciaLista(&(auxRef->compras));
    return &(auxRef->compras);
}




void ImprimeMatriz(TMatriz *pMatriz){
    TCelula *aux = NULL;
    aux = pMatriz->pLinha->baixo;
    while(1){
        aux = aux->direita;
        if (aux->linha == -1)
            aux = aux->baixo;
        else{
            printf("------------------------\n");
            printf("Cliente: %d ; Produto: %d\n", aux->linha, aux->coluna);
            ImprimeCompras(&(aux->compras));
        }
        if(aux == pMatriz->pColuna){
            break;
        }
    }
}
void QuantidadeCompraPorProduto(TMatriz *matriz){
    int soma = 0;
    int contador = 0;
    TCelula* auxCabeca = matriz->pColuna;
    TCelula* auxPercorre;
    while (auxCabeca->direita->linha != -1){
        contador++;
        auxCabeca = auxCabeca->direita;
        soma = 0;
        auxPercorre = auxCabeca;
        while (auxPercorre->baixo->coluna != -1){
            auxPercorre = auxPercorre->baixo;
            soma += SomaQtdCompras(&auxPercorre->compras);
        }
        if(auxPercorre->coluna != -1)
            printf("Produto: %d soma: %d\n", auxPercorre->coluna, soma);
    }
}

void QuantidadeCompraPorCliente(TMatriz* matriz){
    int soma = 0;
    int contador = 0;
    TCelula* auxCabeca = matriz->pLinha;
    TCelula* auxPercorre = NULL;
    while(auxCabeca->baixo->coluna != -1){
        contador++;
        auxCabeca = auxCabeca->baixo;
        soma = 0;
        auxPercorre = auxCabeca;
        while(auxPercorre->direita->linha != -1){
            auxPercorre = auxPercorre->direita;
            soma += SomaQtdCompras(&(auxPercorre->compras));
        }
        if(auxPercorre->linha != -1)
            printf("Cliente: %d soma: %d\n", auxPercorre->linha, soma);
    }
}


//Arquivo
void leMatrizArquivo(FILE *arq, TMatriz *pMatriz, TListaDeCompra *pListaCompra, TCompra *compra){
    int linhas, colunas;
    int qtdCompra = 0;
    char dataCompra[10] = "";
    char c = ' ';
    fscanf(arq, "%d %d", &linhas, &colunas); //pega as linhas e colunas referentes ao tamanho da matriz
    FazMatrizVazia(linhas, colunas, pMatriz); //gera as cabeças da matriz nxm
    while (1){
        c = ' ';
        fscanf(arq, "%d %d", &linhas, &colunas); //le a linha e coluna que as compras vao ser inseridas
        if(feof(arq))
            break;
        pListaCompra = InsereMatriz(pMatriz, linhas, colunas); //gera a celula da matriz esparsa e retorna o ender da cabeça da lista de compra

        while (c != '\n' && c != EOF){
            fscanf(arq, "%s %d", dataCompra, &qtdCompra); //le a data e qtd da compra
            strcpy(compra->data, dataCompra);
            compra->quantidade = qtdCompra;
            InsereCelulaCompra(compra, pListaCompra); //gera cada celula de compra
            c = fgetc(arq); //captura o \n
        }

    }
}