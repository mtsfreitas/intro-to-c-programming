#include <stdio.h>
#include <stdlib.h>

int nadador(int i)
{
    int ia = 1 , ib = 2, ja = 3, jb = 4, a = 5;

    if(i>=5 && i<=7)
    {
        return ia;
    }
    else if(i>=8 && i<=10)
        {
            return ib;
        }
        else
            if(i>=11 && i<=13)
            {
                return ja;
            }
            else
                if(i>=14 && i<=17)
                {
                    return jb;
                }
                else
                    if(i>=18)
                    {
                        return a;
                    }
}

int main()
{
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    switch(nadador(idade))
    {
        case 1: printf("\nInfantil A\n"); break;
        case 2: printf("\nInfantil B\n"); break;
        case 3: printf("\nJuvenil A\n"); break;
        case 4: printf("\nJuvenil B\n"); break;
        case 5: printf("\nAdulto\n"); break;
        default: printf("\nIdade invalida\n"); break;
    }
    return 0;

}
