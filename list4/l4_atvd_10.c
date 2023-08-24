#include <stdio.h>
#include <stdlib.h>

int main()
{
     int numeros[400], i, tamanho_vetNumeros = sizeof(numeros)/sizeof(numeros[0]);
     printf("Informe %d numeros: ", tamanho_vetNumeros);
     for(i=0; i < tamanho_vetNumeros; i++)
     {
        scanf("%d", &numeros[i]);
     }
     printf("\n");
     for(i=0; i < tamanho_vetNumeros; i++)
     {
         printf("O CUBO de %d e: %d\n", numeros[i], (numeros[i]*numeros[i]*numeros[i]));
     }



     return 0;
}
