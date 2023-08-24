#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base[5], altura[5], area[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Triangulo [%d] :\n", i+1);

        printf("Informe a base: ");
        scanf("%f", &base[i]);

        printf("Informe a altura: ");
        scanf("%f", &altura[i]);
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        area[i] = (base[i]*altura[i])/2;
        printf("Area do triangulo %d : %f\n", i+1, area[i]);
    }


    return 0;
}
