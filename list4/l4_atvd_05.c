#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tipo_pao, quant_pao;
    float pao_sal = 0.10, pao_doce = 0.15, valor_total;
    printf("Qual o tipo de pao?\n \n[1] = Pao de Sal\n[2] = Pao Doce\n\n");
    scanf("%d", &tipo_pao);

    if(tipo_pao == 1 || tipo_pao == 2)
    {
        printf("Informe a quantidade de paes: ");
        scanf("%d", &quant_pao);
        if(tipo_pao == 1)
        {
            valor_total = pao_sal*quant_pao;
            printf("Valor total a pagar: R$%.2f\n", valor_total);
        }
        else if(tipo_pao == 2)
             {
                valor_total = pao_doce*quant_pao;
                printf("Valor total a pagar: R$%.2f\n", valor_total);
             }

    }
    else
        printf("Numero invalido\n");





    return 0;
}
