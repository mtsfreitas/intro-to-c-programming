#include <stdio.h>
#include <stdlib.h>

int soma2num(int num1, int num2)
{
    int i, res = 0;
    if(num1 == num2)
    {
       res = num1+num2;
    }
    else
        if(num1 < num2)
        {
            for(i=num1; i<=num2; i++)
            {
                res = res + i;
            }
        }
        else
        {
            for(i=num2; i<=num1; i++)
            {
                res= res + i;
            }
        }

    return res;
}


int main()
{
    int n1, n2, resultado;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    resultado = soma2num(n1, n2);
    printf("A soma de todos os numeros inteiros existentes entre eles, incluindo-os e: %d\n", resultado);


    return 0;

}
