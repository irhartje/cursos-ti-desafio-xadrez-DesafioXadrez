#include <stdio.h>

void moverTorre(int casas)
{
    if (casas > 0)
    {
        moverTorre(casas - 1);
        printf("Torre moveu %d casa(s) para direita \n", casas);
    }
}

void moverBispo(int casas)
{
    if (casas > 0)
    {
        moverBispo(casas - 1);
        printf("Bispo moveu %d casa(s) para diagonal superior direita. \n", casas);
    }
}

void moverRainha(int casas)
{
    if (casas > 0)
    {
        moverRainha(casas - 1);
        printf("Rainha moveu %d casa(s) para esquerda. \n", casas);
    }
}

int main()
{

    int cavalo = 1;

    moverTorre(5);
    moverBispo(5);
    moverRainha(8);

    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cavalo anda uma casa para cima. \n"); // Desce duas casas.
        }
        printf("Cavalo anda uma casa para direita\n"); // Uma casa para esquerda
    }

    return 0;
}
