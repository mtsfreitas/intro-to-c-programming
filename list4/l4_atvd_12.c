#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_A, num_B, troca_AB;
    printf("Informe o valor de A e B: ");
    scanf("%d %d", &num_A, &num_B);

    troca_AB = num_A;
    num_A = num_B;
    num_B = troca_AB;
    printf("\nNovo valor de A: %d\nNovo valor de B: %d\n", num_A, num_B);

    return 0;
}
