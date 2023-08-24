#include <stdio.h>
#include <stdlib.h>



int main()
{
    int m[5][5], i,j, mediaDP=0;

    printf("Informe os valores dos elementos da matriz 5x5: ");

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(i==j)
            {
                printf("Diagonal Principal [%d][%d] = %d\n",i,j, m[i][j]);
                mediaDP = mediaDP+m[i][j];
            }
        }
    }
    mediaDP = mediaDP/5;

    printf("\nMedia dos elementos da diagonal principal: %d\n", mediaDP);

    return 0;
}
