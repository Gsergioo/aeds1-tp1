#include "Matriz.h"

int main() {
    char nomeArq[25];
    int opcao = 0;

    TListaDeCompra* lista = NULL;
    TMatriz *pMatriz = NULL;
    TMatriz matriz;
    pMatriz = &matriz;
    TCompra compra;
    FILE *arq = NULL;


    printf("\n+++++++++++++  BEM VIND@!  +++++++++++++\n");

    do {
        printf("\n");
        printf("--------------------------------------------------\n");
        printf("|            ++++++  OPÇÕES:  ++++++             |\n");
        printf("| [1] Inserir o nome de um arquivo               |\n");
        printf("| [2] Exibir Matriz Completa                     |\n");
        printf("| [3] Exibir Quantidade de Compras por Cliente   |\n");
        printf("| [4] Exibir Quantidade de Compras por Produto   |\n");
        printf("| [5] Alunos                                     |\n");
        printf("| [6] Sair                                       |\n");
        printf("--------------------------------------------------\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        getchar();
        switch (opcao) {
            case (1):
                printf("Nome do arquivo txt: ");
                fgets(nomeArq, 25, stdin);
                nomeArq[(int) strlen(nomeArq) - 1] = '\0';
                printf("\n");
                arq = fopen(nomeArq, "r");
                if (arq == NULL) {
                    printf("Erro na leitura do arquivo!\n");
                    printf("Tente inserir outro nome ou corrigir o que foi inserido.\n");
                } else {
                    printf("\n ARQUIVO ABERTO COM SUCCESSO!! \n");
                    leMatrizArquivo(arq, pMatriz, lista, &compra);
                }
                break;
            case (2):
                if(arq != NULL)
                    ImprimeMatriz(pMatriz);
                else
                    printf("\nInsira o nome do arquivo primeiro!\n");
            break;
            case (3):
                if(arq != NULL)
                    QuantidadeCompraPorCliente(pMatriz);
                else
                    printf("\nInsira o nome do arquivo primeiro!\n");
            break;
            case (4):
                if(arq != NULL)
                    QuantidadeCompraPorProduto(pMatriz);
                else
                    printf("\nInsira o nome do arquivo primeiro!\n");
            break;
            case (5):
                printf("\n +++ ALUNOS: +++\n");
                printf("Lázaro Izidoro Bodevan Maia - 3861\n");
                printf("Guilherme Sérigio de Souza - 3854\n");
                break;
            case (6):
                printf("------------- FIM!! -------------");
                if(arq != NULL)
                    fclose(arq);
                return 0;
            default:
                printf("Opcao Invalida");
                }
        }while (opcao >= 0);
    }