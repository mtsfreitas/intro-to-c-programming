#include <stdio.h>
#include <stdlib.h>

#define mTam 10

int main()
{
    int m[mTam][mTam], i,j;
    printf("Informe os valores dos elementos da matriz %dx%d: ", mTam, mTam);


    for(i=0; i<mTam; i++)
    {
        for(j=0; j<mTam; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nMatriz sem os elementos da diagonal principal: \n\n");
    for(i=0; i<mTam; i++)
    {
        for(j=0; j<mTam; j++)
        {
            if(i==j)
                {
                    printf("Diagonal Principal: [%d][%d] = %d\n",i,j, m[i][j]);
                }
        }
    }
    printf("\n");

    for(i=0; i<mTam; i++)
    {
        for(j=0; j<mTam; j++)
        {
            if(i!=j)
            {
              printf("%d\t", m[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}
