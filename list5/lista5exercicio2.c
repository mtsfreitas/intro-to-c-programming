#include <stdio.h>
#include <stdlib.h>

int main()
{
    float paoSal = 0.10, paoDoce = 0.15, valTotal;
    int tipoPao, quantPao;

    printf("Escolha o tipo de pao: \n[1] Pao de Sal\n[2] Pao Doce\n\n");
    scanf("%d", &tipoPao);
    if(tipoPao ==1 || tipoPao ==2)
    {
        printf("\nQuantidade de paes: ");
        scanf("%d", &quantPao);

        if(tipoPao == 1)
        {
            valTotal = paoSal*quantPao;
            printf("Valor total a pagar: R$%.2f\n", valTotal);
        }
        else
        {
            valTotal = paoDoce*quantPao;
            printf("Valor total a pagar: R$%.2f\n", valTotal);
        }
    }
    else
        printf("Tipo incorreto.");


    return 0;
}
