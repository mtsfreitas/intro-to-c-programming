#include <stdio.h>
#include <stdlib.h>



int main()
{
    int m[6][3], i, j, maior, menor, iMaior, jMaior, iMenor, jMenor;
    printf("Informe os valores dos elementos da matriz 6x3:\n\n");
    for(i=0; i<6; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    maior= m[0][0];
    iMaior= 0;
    jMaior= 0;

    menor= m[0][0];
    iMenor= 0;
    jMenor= 0;

    for(i=1; i<6; i++)
    {
        for(j=1; j<3; j++)
        {
            if(m[i][j] > maior)
            {
                maior = m[i][j];
                iMaior = i;
                jMaior = j;
            }
            else
                if(m[i][j] < menor)
                {
                    menor = m[i][j];
                    iMenor = i;
                    jMenor = j;
                }
        }
    }
    printf("\nMaior: %d\nLinha: %d\nColuna: %d\n\nMenor: %d\nLinha: %d\nColuna: %d\n", maior, iMaior, jMaior, menor, iMenor, jMenor);





    return 0;
}
