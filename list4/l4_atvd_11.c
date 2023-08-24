#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[200], i, qtd_par=0, qtd_impar=0, tamanho_vetNumeros = sizeof(numeros)/sizeof(numeros[0]);
    printf("Informe %d numeros: ", tamanho_vetNumeros);
    for(i=0; i < tamanho_vetNumeros; i++)
    {
        scanf("%d", &numeros[i]);
        if(numeros[i]%2==0)
        {
            qtd_par++;
        }
        else
            qtd_impar++;
    }
    printf("\nQuantidade de numeros pares: %d\nQuantidade de numeros impares: %d\n", qtd_par, qtd_impar);



    return 0;
}
