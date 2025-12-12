#include <stdio.h>
int main()
{
    int torre = 0, bispo = 0, rainha = 0;

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
    printf("Rainha anda %d casa(s) para esquerda.", rainha);

    return 0;
}
