#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal_bruto, val_prestacao, credito;
    printf("Informe o salario bruto: ");
    scanf("%f", &sal_bruto);

    printf("Informe o valor da prestacao: ");
    scanf("%f", &val_prestacao);

    credito = (sal_bruto*30)/100;

    if(val_prestacao <= credito)
        printf("\nO emprestimo pode ser concedido.\n");
    else
        printf("\nO emprestimo nao pode ser concedido.\n");


    return 0;
}
