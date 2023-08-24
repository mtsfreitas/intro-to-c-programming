#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo2, *arquivo3;
    int x;

    if ((arquivo2 = fopen("numeros.txt", "r")) == NULL)
    {
        printf("Nao foi possivel abrir o arquivo numeros.txt\n");
        return 0;
    }


    if((arquivo3 = fopen("pares.txt", "w"))==NULL)
	{
		printf("\nNao foi possivel criar o arquivo pares.txt\n");
		return 0;
	}

/*
    while((fscanf(arquivo2, "%d", &x))!=EOF)
    {
        if(x%2==0)
        {
            fprintf(arquivo3, "%d ", x);
        }
    }
*/

    while(!feof(arquivo2))
    {
        fscanf(arquivo2, "%d", &x);
        if(x%2==0)
        {
            fprintf(arquivo3, "%d ", x);
        }
    }

    printf("Arquivo (pares.txt) gerado com sucesso.\n");

    fclose(arquivo2);
    fclose(arquivo3);

    return 0;
}
