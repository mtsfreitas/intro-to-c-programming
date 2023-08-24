#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val_L, val_M, val_N, i;
    printf("Informe 3 valores: ");
    scanf("%d %d %d", &val_L, &val_M, &val_N);

    if(val_L <= val_M && val_L <= val_N && val_M <= val_N)
        printf("\nOrdem Crescente: %d %d %d\n", val_L, val_M, val_N);
    else
        if(val_L <= val_M && val_L <= val_N && val_M >= val_N)
            printf("\nOrdem Crescente: %d %d %d\n", val_L, val_N, val_M);
        else
            if(val_L >= val_M && val_L <= val_N && val_M <= val_N)
                printf("\nOrdem Crescente: %d %d %d\n", val_M, val_L, val_N);
            else
                if(val_L <= val_M && val_L >= val_N && val_M >= val_N)
                    printf("\nOrdem Crescente: %d %d %d\n", val_N, val_L, val_M);
                else
                    if(val_L >= val_M && val_L >= val_N && val_M <= val_N)
                        printf("\nOrdem Crescente: %d %d %d\n", val_M, val_N, val_L);
                    else
                        printf("\nOrdem Crescente: %d %d %d\n", val_N, val_M, val_L);



    return 0;
}
