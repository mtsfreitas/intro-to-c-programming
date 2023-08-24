#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo1;
    int n1, n2, operacao, resultado, i=0;

    if ((arquivo1 = fopen("calculadora.txt", "w")) == NULL)
    {
        printf("Nao foi possivel abrir o arquivo (calculadora.txt)\n");
        return 0;
    }

        do
        {
            printf("Operacao a ser realizada:\n\n[1] Adicao\n[2] Subtracao\n\n");
            scanf("%d", &operacao);

            if((operacao==1 || operacao ==2) && i==0)
            {
                if(operacao==1)
                {
                    i = 1;

                }
                else
                    {
                         i = 2;
                    }
            }
            else
            {
                printf("\n> Opcao invalida. Digite novamente <\n\n");
            }
        }while(i==0);


        printf("\nDigite o primeiro numero: ");
        scanf("%d", &n1);

        printf("Digite o segundo numero: ");
        scanf("%d", &n2);



        if(i==1)
        {
            resultado = n1+n2;
            fprintf(arquivo1, "%d + %d = %d", n1, n2, resultado);
        }
        else
            if(i==2)
            {
                 resultado = n1-n2;
                 fprintf(arquivo1, "%d - %d = %d", n1, n2, resultado);
            }




    printf("\nArquivo (calculadora.txt) gerado com sucesso.\n");

    fclose(arquivo1);
    return 0;
}
