#include <stdio.h>
#include <stdlib.h>

float notas(float nota1, float nota2, float nota3, char letra)
{
    float total;
    if(letra == 'A' || letra =='a')
    {
        total = (nota1+nota2+nota3)/3;
    }
    else
        if(letra == 'P' || letra == 'p')
        {
            total = ((nota1*5)+(nota2*3)+(nota3*2))/(5+3+2);
        }
        else
            {
                printf("\nLetra invalida. Somente [A] ou [P]\n");
                return 0;
            }

    return total;

}


int main()
{
    int i;
    float n1, n2, n3, media;
    char letra;

    for(i=0; i<3; i++)
    {
        printf("Informe a nota [%d]: ", i+1);
        if(i==0)
        {
            scanf(" %f", &n1);
        }
        else if(i==1)
            {
                scanf(" %f", &n2);
            }
            else
            {
                scanf(" %f", &n3);
            }
    }


    printf("\nMedia: [A]ritmetica ou [P]onderada: ");
    scanf(" %c", &letra);

    media = notas(n1,n2,n3,letra);
    if(letra=='A' || letra == 'a')
    {
        printf("\nMedia Aritmetica: %.2f\n", media);
    }
    else
        if(letra=='P' || letra =='p')
        {
            printf("\nMedia Ponderada: %.2f\n", media);
        }


    return 0;

}
