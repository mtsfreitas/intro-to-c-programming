#include <stdio.h>
#include <stdlib.h>



int main()
{
    int matrizA[3][5], matrizB[3][5], matrizS[3][5], matrizD[3][5], i, j;
    printf("Preencha a matriz A 3x5:\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nPreencha a matriz B 3x5:\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("\nmatrizS: {");
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            matrizS[i][j] = matrizA[i][j]+matrizB[i][j];
            printf("%d", matrizS[i][j]);

            if(matrizS[i][j]!=matrizS[2][4])
            {
                printf(", ");
            }
        }

    }
    printf("}\n");

    printf("matrizD: {");
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            matrizD[i][j] = matrizA[i][j]-matrizB[i][j];
            printf("%d ", matrizD[i][j]);

            if(matrizD[i][j]!=matrizD[2][4])
            {
                printf(", ");
            }
        }
    }
    printf("}\n");

    return 0;
}
