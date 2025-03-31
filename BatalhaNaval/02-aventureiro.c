#include <stdio.h>

#define TAMANHO_TABULEIRO 10

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO])
{
    for (int i = 0; i < TAMANHO_TABULEIRO; i++)
    {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linha][coluna + i] = 3;
    }
}

void posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linha + i][coluna] = 3;
    }
}

void posicionarNavioDiagonalCrescente(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linha + i][coluna + i] = 3;
    }
}

void posicionarNavioDiagonalDecrescente(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linha + i][coluna - i] = 3;
    }
}

int main()
{
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    posicionarNavioHorizontal(tabuleiro, 2, 2, 3);

    posicionarNavioVertical(tabuleiro, 5, 6, 3);

    posicionarNavioDiagonalCrescente(tabuleiro, 1, 7, 3);

    posicionarNavioDiagonalDecrescente(tabuleiro, 7, 8, 3);

    exibirTabuleiro(tabuleiro);

    return 0;
}
