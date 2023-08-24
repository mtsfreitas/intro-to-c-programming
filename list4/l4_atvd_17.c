#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_N, fat_N, i;
    printf("Informe um numero: ");
    scanf("%d", &num_N);
    fat_N = num_N;

    if(num_N==0)
        printf("%d! = 1", num_N);
    else
        if(num_N>=1)
        {
            for(i=num_N-1; i>=1; i--)
            {
                fat_N = fat_N*i;
            }
            printf("%d! = %d\n", num_N, fat_N);
        }
        else
            printf("Numero negativo nao e permitido\n");


    return 0;
}
