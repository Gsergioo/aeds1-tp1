#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "Lista.h"

int main() {
    /*
    char nomeArq[25];
    char tam[100], auxiliar[100];
    int opcao = 0;
    int linhas = 0, colunas = 0, cont = 0;

    printf("+++++++++++++  BEM VINDX!  +++++++++++++\n");
    printf("Nome do arquivo txt: ");
    fgets(nomeArq,25,stdin);
    nomeArq[(int)strlen(nomeArq)-1] = '\0';
    printf("\n");

    FILE *arq;
    arq = fopen(nomeArq, "r");

    if(arq == NULL){
        printf("Erro na leitura do arquivo!\n");
        printf("Tente inserir outro nome ou corrigir o que foi inserido.\n");
        while(arq == NULL){
            printf("Insira um nome válido: ");
            fgets(nomeArq,25,stdin);
            nomeArq[(int)strlen(nomeArq)-1] = '\0';
            arq = fopen(nomeArq, "r");
        }
    }

    printf("Arquivo aberto com sucesso!\n");

    do{
        printf("\n");
        printf("++++++  OPÇÕES:  ++++++\n");
        printf("[0] Inserir o nome de outro arquivo\n");
        printf("[1] \n");
        printf("[2] \n");
        printf("[3] \n");
        printf("[4] \n");
        printf("[5] \n");
        printf("[6] Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao){
            case (1):
                fgets(nomeArq,25,stdin);
                nomeArq[(int)strlen(nomeArq)-1] = '\0';
                printf("\n");
                break;

            case (2):

                break;

            case (3):

                break;

            case (4):

                break;

            case (5):

                break;

            case (6):
                printf(" UM BEJO NESSA SUA BUNDA GORDA!! ");
                return 0;
        }

        fscanf(arq, "%d, %d", &linhas, &colunas);

        printf("Linhas: %d\n", linhas);
        printf("Colunas: %d\n", colunas);

        if (linhas <= 0 || colunas <= 0) {
            printf("Linhas ou colunas inválidos!");
        }
        fclose(arq);

    }while(opcao >= 0);
     */

    TLista *plista = NULL;
    TLista lista;
    plista = &lista;
    FLVazia(plista);
    printf("%d\n", EhVazia(plista));
    printf("pLinha %p\n", plista->pLinha);
    printf("pColuna %p\n", plista->pColuna);
    printf("lista %p\n", plista);
    printf("direita %p\n", plista->pLinha->direita);
    printf("baixo %p\n", plista->pLinha->baixo);

    LImprime(plista);
    return 0;
}
