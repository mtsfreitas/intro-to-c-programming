#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade[10], i;
    float idadeMedia = 0;

    printf("Informe a idade de 10 pessoas: \n\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &idade[i]);
        idadeMedia = idadeMedia + idade[i];
    }
    printf("\nA idade media das 10 pessoas e: %.2f\n", idadeMedia/10);

    return 0;
}
