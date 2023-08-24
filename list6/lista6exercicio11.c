#include <stdio.h>
#include <stdlib.h>



int main()
{
    int m[3][5], i, j, qtd15_20=0;
    printf("Informe os valores dos elementos de uma matriz 3x5:\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
            if(m[i][j] >= 15 && m[i][j] <= 20)
            {
                qtd15_20++;
            }
        }
    }
    printf("\nQuantidade de elementos com valores entre 15 e 20: %d\n", qtd15_20);



    return 0;
}
