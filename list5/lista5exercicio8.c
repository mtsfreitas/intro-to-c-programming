#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, valorN;
    float E=0;

    printf("Informe um valor inteiro positivo: ");
    scanf("%d", &valorN);

    if(valorN>0)
    {
        printf("\nE = ");
        while(i<=valorN)
        {
            E = E + (float)1/i;

            printf("1/%d", i);
            if(i!=valorN)
                printf(" + ");

            i++;
        }
        printf("\nE = %.2f\n", E);
    }
    else
    {
        printf("Valor invalido.\n");
    }

    return 0;
}
