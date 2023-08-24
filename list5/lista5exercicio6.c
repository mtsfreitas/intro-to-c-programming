#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numPares = 500, somaPares = 0, i;
    for(i=1; i<=numPares; i++)
    {
        if(i%2==0)
        {
            somaPares = somaPares+i;
        }
    }
    printf("A soma de todos os numeros inteiros pares no intervalo de 1 a %d e: %d\n", numPares, somaPares);

    return 0;
}
