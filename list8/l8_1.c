#include <stdio.h>
#include <stdlib.h>
#define QTDPESSOAS 5


    struct dadosPessoa{
        char nome[30];
        char endereco[50];
        int telefone;
    }dadosPessoa;



int main()
{
    int i=0;

    struct dadosPessoa dpessoa[QTDPESSOAS];

    while(i<QTDPESSOAS)
    {
       printf("PESSOA: %d\n", i+1);
       printf("Nome: ");
       gets(dpessoa[i].nome);

       printf("Endereco: ");
       gets(dpessoa[i].endereco);

       printf("Telefone: ");
       scanf("%d", &dpessoa[i].telefone);
       fflush(stdin);


       printf("\n");
       i++;
   }

   for(i=0; i<QTDPESSOAS; i++)
   {
       printf("PESSOA [%d]\n---------\nNome: < %s >\nEndereco: < %s >\nTelefone: < %d >\n\n\n", i+1, dpessoa[i].nome, dpessoa[i].endereco, dpessoa[i].telefone);
   }




    return 0;
}