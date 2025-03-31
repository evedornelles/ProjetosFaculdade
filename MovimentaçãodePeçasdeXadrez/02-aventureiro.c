#include <stdio.h>

int main()
{
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5)
    {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do
    {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\nMovimento do Cavalo:\n");
    for (int m = 0; m < 2; m++)
    {
        printf("Baixo\n");
    }
    int n = 0;
    while (n < 1)
    {
        printf("Esquerda\n");
        n++;
    }

    return 0;
}
