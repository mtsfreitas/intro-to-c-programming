#include <stdio.h>
#include <stdlib.h>

void fatfun(int num)
{
    int i, res=0;

    if(num==0)
    {
        num = 1;
        printf("Reposta: %d \n", num);
    }
    else if(num<0)
         {
            printf("Fatorial invalido.\n");
         }
         else
            {
                for(i=num-1; i>=1; i--)
                {
                    num = num*i;
                }
                printf("Reposta: %d \n", num);
            }


}


int main()
{
    int n;
    printf("Fatorial de: ");
    scanf("%d", &n);

    fatfun(n);

    return 0;

}
