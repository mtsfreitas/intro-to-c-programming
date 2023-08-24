#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[10], vet2[10], vetR[20], i, j=0, k=0;
    printf("VETOR 1 : Informe 10 numeros: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &vet1[i]);
    }
    printf("\nVETOR 2: Informe 10 numeros: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &vet2[i]);
    }
    for(i=0; i<20; i++)
    {
        if(i%2==0)
        {
            vetR[i] = vet1[j];
            j++;
        }
        else
        {
            vetR[i] = vet2[k];
            k++;
        }
    }
    printf("\nvetorResultante = {");
    for(i=0; i<20; i++)
    {
        printf("%d", vetR[i]);
        if(i!=19)
            printf(",");
    }
    printf("}\n");

    return 0;
}
