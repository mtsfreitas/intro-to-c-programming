#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_N, qtd_num, i, soma_par=0;
    printf("Informe a quantidade de numeros: ");
    scanf("%d", &qtd_num);

    printf("Informe %d valores inteiros: ", qtd_num);
    for(i=0; i<qtd_num; i++)
    {
        scanf("%d", &num_N);
        if(num_N%2==0)
            soma_par = soma_par+num_N;
    }
    printf("\nA soma dos numeros pares e: %d\n", soma_par);

    return 0;
}
