#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6], i, qtdPos=0, qtdNeg=0;
    printf("Informe 6 numeros: ");
    for(i=0; i<6; i++)
    {
        scanf("%d", &vet[i]);
    }
    for(i=0; i<6; i++)
    {
        if(vet[i] >= 0)
            qtdPos++;
        else
            qtdNeg++;
    }
    printf("\nQuantidade de numeros positivos: %d\nQuantidade de numeros negativos: %d\n", qtdPos, qtdNeg);

    return 0;
}
