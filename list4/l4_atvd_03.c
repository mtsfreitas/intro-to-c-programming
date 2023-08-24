#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num_1, num_2, num_3, soma;
    printf("Informe 3 numeros: ");
    scanf("%f %f %f", &num_1, &num_2, &num_3);
    soma = num_2+num_3;

    if(num_1 > soma)
        printf("\nO primeiro numero e maior que a soma dos outros\n");
    else
        printf("\nO primeiro numero nao e maior que a soma dos outros\n");

    return 0;
}
