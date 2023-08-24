#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
   printf("Informe o valor de N: ");
   scanf("%d", &n);
   float vetA[n], vetB[n], vetC[n], vetD[n];

   if(n>=10)
   {
       printf("\nInforme o vetor A: ");
       for(i=0; i < n ; i++)
       {
           scanf("%f", &vetA[i]);
       }
       printf("\nInforme o vetor B: ");
       for(i=0; i < n ; i++)
       {
           scanf("%f", &vetB[i]);
       }

       printf("\nVetor C: {");
       for(i=0; i<n; i++)
       {
           if(vetA[i] >= vetB[i])
              {
                vetC[i] = vetA[i];
              }
           else
              {
                vetC[i] = vetB[i];
              }
           printf("%.1f", vetC[i]);

           if(i!=n-1)
           {
               printf(", ");
           }
       }
       printf("}");

       printf("\nVetor D: {");
       for(i=0; i < n; i++)
       {
           vetD[i] = ((vetA[i]+vetB[i])/2);
           printf("%.1f", vetD[i]);

            if(i!=n-1)
           {
               printf(", ");
           }
       }
       printf("}\n");


   }
   else
        printf("O valor de N precisa ser maior ou igual a 10.\n");

    return 0;
}
