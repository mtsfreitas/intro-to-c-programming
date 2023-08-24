#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_minimo, salario_pessoa, qtd_sal;
    printf("Informe o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    if(salario_minimo > 0)
    {
        printf("Informe o valor do salario da pessoa: ");
        scanf("%f", &salario_pessoa);

        qtd_sal = salario_pessoa/salario_minimo;
        printf("\nA pessoa ganha %.1f salarios minimos\n", qtd_sal);
    }
    else
        printf("\nValor invalido para o salario minimo\n");

    return 0;
}
