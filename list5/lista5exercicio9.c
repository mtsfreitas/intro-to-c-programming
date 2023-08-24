#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valorN;

    printf("Informe um valor: ");
    scanf("%d", &valorN);
    printf("\n");

    for(i=1; i<=valorN; i++)
    {
        printf("%dX%d = %d\n", i, valorN, i*valorN);
    }

    return 0;
}
