#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet1[10], vet2[10], i;
   printf("Informe 10 numeros: ");
   for(i=0; i<10; i++)
   {
        scanf("%d", &vet1[i]);
   }
   for(i=0; i<10; i++)
   {
       if(vet1[i] < 10)
       {
           vet2[i] = 1;
       }
       else
       {
           vet2[i] = vet1[i];
       }
   }
   printf("\nPrimeiro vetor: ");
   for(i=0; i<10; i++)
   {
       printf("%d ", vet1[i]);
   }
   printf("\nSegundo vetor: ");
   for(i=0; i<10; i++)
   {
       printf("%d ", vet2[i]);
   }
   printf("\n");

    return 0;
}
