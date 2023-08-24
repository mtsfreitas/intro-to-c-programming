#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salFuncionario, salReajustado, aumento = 0.15;

    printf("Informe o salario do funcionario: ");
    scanf("%f", &salFuncionario);
    if(salFuncionario < 500)
    {
        salReajustado = (salFuncionario+(salFuncionario*aumento));
        printf("\nSalario reajustado: %.2f\n", salReajustado);
    }
    else
        printf("\nSem direito a aumento de salario.\n");


    return 0;
}
