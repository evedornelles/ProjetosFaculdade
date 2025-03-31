#include <stdio.h>

void moverTorre(int passos)
{
    if (passos == 0)
        return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverBispo(int passos)
{
    if (passos == 0)
        return;
    printf("Cima, Direita\n");
    moverBispo(passos - 1);
}

void moverRainha(int passos)
{
    if (passos == 0)
        return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main()
{
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++)
    {
        printf("Direita\n");
    }

    return 0;
}
