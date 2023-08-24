#include <stdio.h>
#include <stdlib.h>
#define QTDPRODUTOS 5

struct mercado{
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
};

int main()
{
   struct mercado mercadoria[QTDPRODUTOS];
   int i, buscaCodigo, buscaQtd, checkCodigo=0;

   for(i=0; i<QTDPRODUTOS; i++)
   {
       printf("Informe sobre o produto: %d", i+1);
       printf("\nCodigo: ");
       scanf(" %d", &mercadoria[i].codigo);

       printf("Nome: ");
       scanf(" %[^\n]s", mercadoria[i].nome);

       printf("Preco: ");
       scanf("%f", &mercadoria[i].preco);

       printf("Quantidade: ");
       scanf("%d", &mercadoria[i].quantidade);
       printf("\n");

   }

   printf("---PEDIDO---");
   printf("\nCodigo: ");
   scanf("%d", &buscaCodigo);


   while(buscaCodigo!=0)
   {

       for(i=0; i<QTDPRODUTOS; i++)
       {
           if(buscaCodigo == mercadoria[i].codigo)
           {
               break;
           }
      }

      if(i == QTDPRODUTOS)
      {
           printf("\nCodigo nao encontrado.\n");
      }
      else{
            printf("Quantidade: ");
            scanf("%d", &buscaQtd);
            if(buscaQtd <= mercadoria[i].quantidade)
           {
                mercadoria[i].quantidade = mercadoria[i].quantidade - buscaQtd;
               printf("\nESTOQUE ATUALIZADO\n");
               printf("Quantidade restante de %s: %d\n", mercadoria[i].nome, mercadoria[i].quantidade);
           }
           else
           {
               printf("\nEstoque insuficiente do produto!\n");
           }
      }



       printf("\n---PEDIDO---");
       printf("\nCodigo: ");
       scanf("%d", &buscaCodigo);
    }


   if(buscaCodigo==0)
        printf("\nPrograma encerrado.\n");
   else
        printf("\nCodigo invalido.\n");

    return 0;
}
