#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, valorN;

    printf("Informe um valor: ");
    scanf("%d", &valorN);
    printf("\n");

    while(i<=valorN)
    {
        printf("%dX%d = %d\n", i, valorN, i*valorN);
        i++;
    }

    return 0;
}
