#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vel_max, vel_motorista, multa = 0;
    printf("Informe a velocidade maxima: ");
    scanf("%f", &vel_max);

    printf("Informe a velocidade do motorista: ");
    scanf("%f", &vel_motorista);

    if(vel_motorista <= vel_max)
        printf("\nVelocidade permitida\n");
    else
        if(vel_motorista <= vel_max+10)
        multa = 50;
        else
            if(vel_motorista <= vel_max+30)
                multa = 100;
            else
                if(vel_motorista > vel_max+30)
                    multa = 200;

    if(multa > 0)
        printf("\nMulta a pagar: R$%.2f\n", multa);


    return 0;
}
