#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custo_fabrica, perc_distribuidor = 28, impostos = 45, valor_total;
    printf("Informe o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    valor_total = custo_fabrica + ((custo_fabrica*(perc_distribuidor/100) + custo_fabrica*(impostos/100)));
    printf("\nCusto do carro ao consumidor: R$%.2f\n", valor_total);

    return 0;
}
