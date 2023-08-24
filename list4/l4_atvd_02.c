#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, meses = 12;
    float capital, juros, montante;

    printf("Informe o capital aplicado: ");
    scanf("%f", &capital);
    montante = capital;

    printf("Informe a porcentagem de juros mensais: ");
    scanf("%f", &juros);
    printf("\n");

    for(i=1; i <= meses; i++)
    {
        montante *= (1+juros/100);
        printf("Montante do mes %d e: %f\n",i, montante);
    }

    return 0;
}
