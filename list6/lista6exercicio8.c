#include <stdio.h>
#include <stdlib.h>

#define tamVet 30

int main()
{
    int vet[tamVet], i, maior, menor, maiorPos, menorPos;

    int tam = sizeof(vet)/sizeof(vet[0]);

    printf("Informe %d valores do vetor: ", tam);
    for(i=0; i < tamVet; i++)
    {
        scanf("%d", &vet[i]);
    }

    maior = vet[0];
    menor = vet[0];
    maiorPos = 0;
    menorPos = 0;

    for(i=1; i < tamVet; i++)
    {
        if(vet[i] > maior)
        {
            maior = vet[i];
            maiorPos = i;
        }
        else
            if(vet[i] < menor)
            {
                menor = vet[i];
                menorPos = i;
            }
    }
    printf("\nMaior numero: %d\nPosicao: %d\n\nMenor Numero: %d\nPosicao: %d\n", maior, maiorPos, menor, menorPos);



    return 0;
}
