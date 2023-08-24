#include <stdio.h>
#include <stdlib.h>

int par_impar(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    else
        return 0;
}


int main()
{
    int n;
    printf("Informe um numero par ou impar: ");
    scanf("%d", &n);

    return par_impar(n);

}
