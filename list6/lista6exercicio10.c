#include <stdio.h>
#include <stdlib.h>



int main()
{
    int id, i, limiteClientes = 0;
    printf("ID do cliente: ");
    scanf("%d", &id);

    float vetId[50], vetValor[50], fatDia=0;

    while(id > 0)
    {
        vetId[limiteClientes] = id;

        printf("Valor a pagar: ");
        scanf("%f", &vetValor[limiteClientes]);

        printf("\n");
        fatDia = fatDia+vetValor[limiteClientes];


        limiteClientes++;
        if(limiteClientes>50-1)
        {
            printf("Limite de clientes por dia alcancado.\n");
            return 0;
        }

        printf("ID do cliente: ");
        scanf("%d", &id);
    }
        printf("Programa Encerrado.\n");
        printf("\n");
		for(i=0; i<limiteClientes; i++)
        {
            printf("ID Cliente: %.0f\n", vetId[i]);
            printf("Valor a pagar: %.2f\n\n", vetValor[i]);
        }
        printf("\nValor total do faturamento: %.2f\n", fatDia);




    return 0;
}
