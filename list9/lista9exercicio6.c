#include <stdio.h>
#include <stdlib.h>

int idade(int a, int m, int d)
{
    int dtotal = 0;

    dtotal = (a*365) + (m*30) + (d);

    return dtotal;
}


int main()
{
    int anos, meses, dias, diastotal;

    printf("Informe a idade em anos: ");
    scanf("%d", &anos);

    printf("Informe a idade em meses: ");
    scanf("%d", &meses);

    printf("Informe a idade em dias: ");
    scanf("%d", &dias);

    diastotal = idade(anos, meses, dias);
    printf("\nIdade total em dias: %d\n", diastotal);



    return 0;
}
