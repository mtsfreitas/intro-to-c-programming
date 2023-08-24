#include <stdio.h>
#include <stdlib.h>

int vogal(char letra)
{
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        return 1;
    }
    else
        return 0;

}


int main()
{
   char l;
   printf("Digite uma letra: ");
   scanf("%c", &l);

   return vogal(l);

}
