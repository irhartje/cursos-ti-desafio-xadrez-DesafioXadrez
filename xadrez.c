#include <stdio.h>
int main()
{
    int torre = 0, bispo = 0, rainha = 0, cavalo = 1;

    for (torre = 0; torre < 5; torre++)
        printf("Torre moveu %d casa(s) para direita.\n", torre);

    while (bispo <= 5)
    {
        printf("Bispo moveu %d casa(s) para diagonal superior direita.\n", bispo++);
    }

    printf("Rainha começa a jogada. \n");
    do
    {
        rainha++;
    } while (rainha < 8);
    printf("Rainha anda %d casa(s) para esquerda.\n", rainha);

        while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cavalo anda uma casa para baixo. \n"); // Desce duas casas.
        }
        printf("Cavalo anda uma casa para esquerda\n"); // Uma casa para esquerda
    }
    
    
    
    
    
    
    
    return 0;
}
