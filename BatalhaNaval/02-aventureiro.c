#include <stdio.h>

#define TAMANHO_TABULEIRO 10

// Função para exibir o tabuleiro
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

// Função para posicionar navios horizontais
void posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linha][coluna + i] = 3;
    }
}

// Função para posicionar navios verticais
void posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linha + i][coluna] = 3;
    }
}

// Função para posicionar navios diagonais (diagonal crescente)
void posicionarNavioDiagonalCrescente(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linha + i][coluna + i] = 3;
    }
}

// Função para posicionar navios diagonais (diagonal decrescente)
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

    // Posicionar navios horizontais
    posicionarNavioHorizontal(tabuleiro, 2, 2, 3);

    // Posicionar navios verticais
    posicionarNavioVertical(tabuleiro, 5, 6, 3);

    // Posicionar navio diagonal crescente
    posicionarNavioDiagonalCrescente(tabuleiro, 1, 7, 3);

    // Posicionar navio diagonal decrescente
    posicionarNavioDiagonalDecrescente(tabuleiro, 7, 8, 3);

    // Exibir o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}
