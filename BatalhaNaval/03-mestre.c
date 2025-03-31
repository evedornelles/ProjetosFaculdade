#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_HABILIDADE 5

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO])
{
    for (int i = 0; i < TAMANHO_TABULEIRO; i++)
    {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++)
        {
            if (tabuleiro[i][j] == 0)
                printf("0 ");
            else if (tabuleiro[i][j] == 3)
                printf("3 ");
            else if (tabuleiro[i][j] == 5)
                printf("5 ");
        }
        printf("\n");
    }
}

void aplicarHabilidadeCone(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna)
{
    int cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}};

    for (int i = 0; i < TAMANHO_HABILIDADE; i++)
    {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++)
        {
            if (cone[i][j] == 1)
            {
                int x = linha + i - 2;
                int y = coluna + j - 2;
                if (x >= 0 && x < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO)
                {
                    if (tabuleiro[x][y] == 0)
                    {
                        tabuleiro[x][y] = 5;
                    }
                }
            }
        }
    }
}

void aplicarHabilidadeCruz(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna)
{
    int cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}};

    for (int i = 0; i < TAMANHO_HABILIDADE; i++)
    {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++)
        {
            if (cruz[i][j] == 1)
            {
                int x = linha + i - 2;
                int y = coluna + j - 2;
                if (x >= 0 && x < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO)
                {
                    if (tabuleiro[x][y] == 0)
                    {
                        tabuleiro[x][y] = 5;
                    }
                }
            }
        }
    }
}

void aplicarHabilidadeOctaedro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna)
{
    int octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}};

    for (int i = 0; i < TAMANHO_HABILIDADE; i++)
    {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++)
        {
            if (octaedro[i][j] == 1)
            {
                int x = linha + i - 2;
                int y = coluna + j - 2;
                if (x >= 0 && x < TAMANHO_TABULEIRO && y >= 0 && y < TAMANHO_TABULEIRO)
                {
                    if (tabuleiro[x][y] == 0)
                    {
                        tabuleiro[x][y] = 5;
                    }
                }
            }
        }
    }
}

int main()
{
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    tabuleiro[2][2] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[4][2] = 3;

    aplicarHabilidadeCone(tabuleiro, 2, 2);
    aplicarHabilidadeCruz(tabuleiro, 5, 5);
    aplicarHabilidadeOctaedro(tabuleiro, 7, 7);

    exibirTabuleiro(tabuleiro);

    return 0;
}