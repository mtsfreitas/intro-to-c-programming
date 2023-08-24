#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetA[6] = {15, 20, 3, 1, 26, 2}, i, soma=0;
    for(i=0; i<6; i++)
    {
        soma = soma + vetA[i];
    }
    printf("Soma dos elementos de A: %d\n", soma);

    return 0;
}
