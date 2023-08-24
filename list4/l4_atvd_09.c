#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_A, num_B;
    printf("Informe o valor de A e B: ");
    scanf("%d %d", &num_A, &num_B);

    if(num_B == 0)
    {
        printf("\nNao e possivel dividir por 0\n");
    }

    else if(num_A%num_B==0)
            printf("\n%d e divisivel por %d\n", num_A, num_B);
         else
            printf("\n%d nao e divisivel por %d\n", num_A, num_B);

    return 0;
}
