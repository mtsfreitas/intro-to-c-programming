#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    if(mes>=1 && mes<=12 && ano>0)
    {
		if(mes==4 || mes==6 || mes==9 || mes==11)
		{
			if(!(dia>=1 && dia<=30))
			{
				printf("\nData invalida\n");
				return 0;
			}
		}
		if(mes==2)
		{
			if(!(dia>=1 && dia<=28))
			{
				if(dia!=29)
				{
					printf("\nData invalida\n");
					return 0;
				}
			}
		}
		if(mes==1 || mes==3 || mes==5|| mes==7 || mes==8 || mes==10 || mes== 12)
		{
			if(!(dia>=1 &&dia<=31))
			{
				printf("\nData invalida\n");
				return 0;
			}
		}

		if(ano%4==0 && (ano%400==0 || ano%100!=0))
		{
			if(mes==2)
			{
				if(!(dia>=1 && dia<=29))
				{
					printf("\nData invalida\n");
					return 0;
				}
				else if(dia<=28)
                     {
						printf("\nData invalida\n");
						return 0;
					 }
					 else
                     {
                         printf("\nData valida\n");
                     }
		 	}
				printf("\nAno bissexto\n");
		}
		else{
                printf("\nData valida\n");
                printf("\nAno normal\n");
			}

    }
    else
        printf("\nData invalida\n");

    return 0;
}
