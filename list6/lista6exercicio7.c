#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[5], vet2[5], vetR[5], i, soma=0;

    printf("VETOR 1: Informe os 5 valores\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &vet1[i]);
    }

    printf("VETOR 2: Informe os 5 valores\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &vet2[i]);
    }

    printf("\nVETOR 3: {");
    for(i=0; i<5; i++)
    {
        vetR[i] = vet1[i]+vet2[i];
        printf("%d", vetR[i]);

        if(i!=5-1)
            printf(", ");
    }
    printf("}\n");


    return 0;
}
