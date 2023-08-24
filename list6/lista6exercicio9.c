#include <stdio.h>
#include <stdlib.h>

#define mercadorias 100


int main()
{
    int i, j;
    float m[mercadorias][2], fatMensal=0;
	printf("Numero de mercadorias: %d\n\n", mercadorias);
	
    for(i=0; i<mercadorias; i++){
        for(j=0; j<2; j++)
        {
            if(j%2==0)
            {
                printf("Produto %d\n", i+1);
                printf("Informe o preco: ");
            }
            else
            {
                printf("Informe a quantidade: ");
            }
            scanf("%f", &m[i][j]);


            if(j==1)
             {
                printf("\n");
                fatMensal = fatMensal+m[i][0]*m[i][1];
             }

        }

    }
    printf("\nFaturamento Mensal: %.2f\n", fatMensal);

    return 0;
}
