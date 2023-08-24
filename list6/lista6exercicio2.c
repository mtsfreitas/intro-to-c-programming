#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10], i;
    printf("Informe 10 valores: ");

    for(i=0; i<10; i++)
    {
        scanf("%d", &vet[i]);
    }
    for(i=0; i<10; i++)
    {
        if(vet[i]==5)
        {
            printf("\nElemento = 5; Posicao: %d\n", i);
        }
    }


    return 0;
}
