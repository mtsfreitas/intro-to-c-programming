#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km;
    float milhas, jardas, pes, polegadas;
    printf("Informe a conversao desejada para quilometros:\n\n[1] = milhas\n[2] = jardas\n[3] = pes\n[4] = polegadas\n\n");
    scanf("%d", &km);

    switch(km)
    {
        case 1:
            printf("Informe o comprimento: ");
            scanf("%f", &milhas);
            printf("Milhas convertido para KM = %f\n", ((((milhas*1760)*3)*12)*25.3995)/1000000);
        break;

        case 2:
            printf("Informe o comprimento: ");
            scanf("%f", &jardas);
            printf("Jardas convertido para KM = %f\n", (((jardas*3)*12)*25.3995)/1000000);
        break;

        case 3:
            printf("Informe o comprimento: ");
            scanf("%f", &pes);
            printf("Pes convertido para KM = %f\n", ((pes*12)*25.3995)/1000000);
        break;

        case 4:
            printf("Informe o comprimento: ");
            scanf("%f", &polegadas);
            printf("Polegadas convertido para KM = %f\n", (polegadas*25.3995)/1000000);
        break;

        default:
            printf("\nnumero invalido\n");
    }

    return 0;
}
