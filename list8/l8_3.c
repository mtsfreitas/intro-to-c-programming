#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livros{
    char titulo[30];
    char autor[15];
    int ano;
};

int main()
{
   char escolheLivro[30];
   int numLivros, i;
   printf("Informe o numero de livros: ");
   scanf("%d", &numLivros);

   struct livros pesquisaLivros[numLivros];

   for(i=0; i<numLivros; i++)
   {
       printf("\nTitulo: ");
       scanf(" %[^\n]s", pesquisaLivros[i].titulo);

       printf("Autor: ");
       scanf(" %[^\n]s", pesquisaLivros[i].autor);

       printf("Ano: ");
       scanf("%d", &pesquisaLivros[i].ano);

   }

   printf("\nPesquisar livro pelo titulo: ");
   scanf(" %[^\n]s", escolheLivro);


   for(i=0; i<numLivros; i++)
   {
       if(strcmp(pesquisaLivros[i].titulo, escolheLivro) == 0)
       {
           printf("\nLivro encontrado!");
           printf("\nTITULO DO LIVRO: %s\nAUTOR: %s\nANO: %d\n", escolheLivro, pesquisaLivros[i].autor, pesquisaLivros[i].ano);
           return 0;
       }
   }
   if(i==numLivros)
   {
                printf("Livro nao encontrado!\n");
   }


    return 0;
}
