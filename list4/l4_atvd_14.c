#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_N, i, soma=0;
    printf("Informe um numero: ");
    scanf("%d", &num_N);

    for(i=1; i<=num_N; i++)
    {
        soma = soma + i;
    }

    printf("A soma de todos os numeros de 1 ate %d e: %d\n", num_N, soma);

    return 0;
}
