#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int CasasTorre = 0;
    int CasasBispo = 0;
    int CasasRainha  = 0;

    int PosicaoTorre = 1;
    int PosicaoBispo = 1;
    int PosicaoRainha  = 1;

    int DirecaoTorre = 0;
    int DirecaoBispo = 0;
    int DirecaoRainha  = 0;

    printf("********Xadrez********\n");
    //#region Torre
    do
    {
  
        printf("Movimento Torre: Direção (1 - Esquerda       2 - Direita): ");
        scanf("%d",&DirecaoTorre);
    } while ((DirecaoTorre != 1) && (DirecaoTorre != 2));

    do
    {
  
        printf("Movimento Torre: Casas (De 1 a 8): ");
        scanf("%d",&CasasTorre);
    } while (!((CasasTorre >=1 ) && (CasasTorre <= 8)));

    while (PosicaoTorre <= CasasTorre)
    {
        switch (DirecaoTorre)
        {
        case 1:
            printf("Esquerda\n");
            PosicaoTorre++;
            break;
        case 2:
            printf("Direita\n");
            PosicaoTorre++;
            break;
        
        default:
            printf("Tilt\n");
            PosicaoTorre++;
            break;
        }

    }
    //#endregion
    //#region Bispo

    do
    {
  
        printf("Movimento Bispo: Direção (11 - Baixo Esquerda   12 - Baixo Direita   21 - Cima Esquerda   22 - Cima Direita): ");
        scanf("%d",&DirecaoBispo);
    } while ((DirecaoBispo != 11) && (DirecaoBispo != 12) && (DirecaoBispo != 21) && (DirecaoBispo != 22));

    do
    {
  
        printf("Movimento Bispo: Casas (De 1 a 8): ");
        scanf("%d",&CasasBispo);
    } while (!((CasasBispo >=1 ) && (CasasBispo <= 8)));

    
    for (int PosicaoBispo = 1; PosicaoBispo <= CasasBispo; PosicaoBispo++)
    {
        switch (DirecaoBispo)
        {
        case 11:
            printf("Baixo Esquerda\n");
            
            break;
        case 12:
            printf("Baixo Direita\n");
            
            break;
        case 21:
            printf("Cima Direita\n");
            
            break;
        case 22:
            printf("Cima Direita\n");
            
            break;
        
        default:
            printf("Tilt\n");
            
            break;
        }
    }
    
    //#endregion

    //#region Rainha
    do
    {
  
        printf("Movimento Rainha: Direção (1 - Esquerda   2 - Direita   3 - Baixo   4 - Cima): ");
        scanf("%d",&DirecaoRainha);
    } while ((DirecaoRainha != 1) && (DirecaoRainha != 2) && (DirecaoRainha != 3) && (DirecaoRainha != 4));

    do
    {
        printf("Movimento Rainha: Casas (De 1 a 8): ");
        scanf("%d",&CasasRainha);
    } while (!((CasasRainha >=1 ) && (CasasRainha <= 8)));

    
    do
    {
        switch (DirecaoRainha)
        {
        case 1:
            printf("Esquerda\n");
            PosicaoRainha++;
            break;
        case 2:
            printf("Direita\n");
            PosicaoRainha++;
            break;
        case 3:
            printf("Baixo\n");
            PosicaoRainha++;
            break;
        case 4:
            printf("Cima\n");
            PosicaoRainha++;
            break;
        
        default:
            printf("Tilt\n");
            PosicaoRainha++;
            break;
        }
    } while (PosicaoRainha <= CasasRainha);
    //#endregion

    
    
    return 0;
}

