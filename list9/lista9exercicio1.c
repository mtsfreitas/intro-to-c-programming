#include <stdio.h>
#include <stdlib.h>

int posneg(int num)
{
    if(num>=0)
    {
        return 1;
    }
    else
        return 0;
}


int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
	
    return posneg(n);

}
