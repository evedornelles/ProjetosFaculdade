#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
}

void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int horizontal)
{
    for (int i = 0; i < NAVIO; i++)
    {
        if (horizontal)
        {
            tabuleiro[linha][coluna + i] = NAVIO;
        }
        else
        {
            tabuleiro[linha + i][coluna] = NAVIO;
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int tabuleiro[TAMANHO][TAMANHO];
    inicializarTabuleiro(tabuleiro);

    posicionarNavio(tabuleiro, 2, 2, 1);
    posicionarNavio(tabuleiro, 5, 4, 0);

    exibirTabuleiro(tabuleiro);

    return 0;
}