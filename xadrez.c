#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void MoveTorre(int Casas, int DirecaoTorre)
{
    if (Casas > 0)
    {
        switch (DirecaoTorre)
        {
        case 1:
            printf("Esquerda\n");
            break;
        case 2:
            printf("Direita\n");
            break;
        
        default:
            printf("Tilt\n");
            break;
        }
        MoveTorre(Casas - 1,DirecaoTorre);
    }
    

}

void MoveBispo(int Casas, int DirecaoBispo)
{
    if (Casas > 0)
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
        MoveBispo(Casas - 1, DirecaoBispo);
    }
    

}

void MoveRainha(int Casas, int DirecaoRainha)
{
    if (Casas > 0)
    {
        switch (DirecaoRainha)
        {
        case 1:
            printf("Esquerda\n");
            break;
        case 2:
            printf("Direita\n");
            break;
        case 3:
            printf("Baixo\n");
            break;
        case 4:
            printf("Cima\n");
            break;
        
        default:
            printf("Tilt\n");
            break;
        }       
        MoveRainha(Casas - 1, DirecaoRainha);
    }
}

void MoveCavalo(int CasasVertical, int CasasHorizontal, int DirecaoVertical, int DirecaoHorizontal)
{
    if (CasasVertical > 0)
    {
        if (CasasHorizontal > 0)
        {
            switch (DirecaoHorizontal)
            {
                case 1:
                    printf("Baixo\n");
                    break;
                case 2:
                    printf("Cima\n");
                    break;
                default:
                    printf("Tilt\n");
                    break;
            }
            MoveCavalo(CasasVertical, CasasHorizontal - 1, DirecaoVertical, DirecaoHorizontal);
        }
        switch (DirecaoVertical)
        {
            case 1:
                printf("Esquerda\n");
                break;
            case 2:
                printf("Direita\n");
                break;
            default:
                printf("Tilt\n");
                break;
        }
        MoveCavalo(CasasVertical - 1, CasasHorizontal, DirecaoVertical, DirecaoHorizontal);

    }
}

int main() {
    int CasasTorre = 0;
    int CasasBispo = 0;
    int CasasRainha  = 0;
    int CasasCavaloVertical  = 0;
    int CasasCavaloHorizontal  = 0;

    int PosicaoTorre = 1;
    int PosicaoBispo = 1;
    int PosicaoRainha  = 1;
    int PosicaoCavaloVertical  = 1;
    int PosicaoCavaloHorizontal  = 1;


    int DirecaoTorre = 0;
    int DirecaoBispo = 0;
    int DirecaoRainha  = 0;
    int DirecaoCavaloVertical  = 0;
    int DirecaoCavaloHorizontal  = 0;

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

    MoveTorre(CasasTorre, DirecaoTorre);
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

    
    MoveBispo(CasasBispo, DirecaoBispo);
    
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

    
    MoveRainha(CasasRainha, DirecaoRainha);
    //#endregion


    //#region Cavalo
    do
    {
  
        printf("Movimento Cavalo: Vertical (1 - Baixo   2 - Cima): ");
        scanf("%d",&DirecaoCavaloVertical);
    } while ((DirecaoCavaloVertical != 1) && (DirecaoCavaloVertical != 2));

    do
    {
  
        printf("Movimento Cavalo: Horizontal (1 - Esquerda   2 - Direita): ");
        scanf("%d",&DirecaoCavaloHorizontal);
    } while ((DirecaoCavaloHorizontal != 1) && (DirecaoCavaloHorizontal != 2));

    do
    {
        printf("Movimento Cavalo: Vertical Casas (De 1 a 8): ");
        scanf("%d",&CasasCavaloVertical);
    } while (!((CasasCavaloVertical >=1 ) && (CasasCavaloVertical <= 8)));

    do
    {
        printf("Movimento Cavalo: Horizontal Casas (De 1 a 8): ");
        scanf("%d",&CasasCavaloHorizontal);
    } while (!((CasasCavaloHorizontal >=1 ) && (CasasCavaloHorizontal <= 8)));

    

    while (PosicaoCavaloVertical <= CasasCavaloVertical)
    {
        for (int PosicaoCavaloHorizontal = 1; PosicaoCavaloHorizontal <= CasasCavaloHorizontal; PosicaoCavaloHorizontal++)
        {
            switch (DirecaoCavaloHorizontal)
            {
            case 1:
                printf("Baixo\n");
                break;
            case 2:
                printf("Cima\n");
                break;
            default:
                printf("Tilt\n");
                break;
            }
        }
        switch (DirecaoCavaloVertical)
        {
        case 1:
            printf("Esquerda\n");
            PosicaoCavaloVertical++;
            break;
        case 2:
            printf("Direita\n");
            PosicaoCavaloVertical++;
            break;
        default:
            printf("Tilt\n");
            PosicaoCavaloVertical++;
            break;
        }
        
        
    }
    //#endregion

    
    
    return 0;
}

