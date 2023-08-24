#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, j, k=1, i;
    printf("Informe o modulo e o numero: ");
    scanf("%d %d", &m, &j);
    printf("\n");

    for(i=0; k<=10; i++)
    {
        if(i%m == j%m)
        {
            printf("%d e congruente a %d%%%d\n", i, j, m);
            k++;
        }
    }

    return 0;
}
