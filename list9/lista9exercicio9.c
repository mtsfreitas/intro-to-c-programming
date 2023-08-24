#include <stdio.h>
#include <stdlib.h>

#define OLHO_AZUL 1
#define OLHO_VERDE 2
#define OLHO_CASTANHO 3

#define CABELO_LOIRO 1
#define CABELO_PRETO 2
#define CABELO_CASTANHO 3

#define num_pessoas 2

typedef struct{

        char sexo;
        int cor_olho;
        int cor_cabelo;
        int idade;

} Pessoa;


void func_pessoa(Pessoa *p)
{
    int i, invalido;
    for(i=0; i<num_pessoas; i++)
    {
        do{
            printf("Informe o sexo [M] ou [F]: ");
            scanf(" %c", &p[i].sexo);
            invalido = !(p[i].sexo == 'm' || p[i].sexo =='M' || p[i].sexo =='f' || p[i].sexo =='F');
            if(invalido)
            {
                printf("\nLetra invalida. Digite novamente\n");
            }
        }while(invalido);


        do{
            printf("\nInforme a cor dos olhos:\nAzul[1] | Verde[2] | Castanho[3]: ");
            scanf(" %d", &p[i].cor_olho);
            invalido = (!(p[i].cor_olho== 1 || p[i].cor_olho== 2 || p[i].cor_olho== 3));
            if(invalido)
            {
                printf("\nNumero invalido. Digite novamente\n");
            }
        }while(invalido);

        do{
            printf("\nInforme a cor do cabelo:\nLoiro[1] | Preto[2] | Castanho[3]: ");
            scanf(" %d", &p[i].cor_cabelo);
            invalido = (!(p[i].cor_cabelo== 1 || p[i].cor_cabelo== 2 || p[i].cor_cabelo== 3));
            if(invalido)
            {
                printf("\nNumero invalido. Digite novamente\n");
            }
        }while(invalido);


        do{

            printf("\nInforme a idade: ");
            scanf(" %d", &p[i].idade);
            invalido = (p[i].idade==0 || p[i].idade < 0);
            if(invalido)
            {
                printf("\Idade invalida. Digite novamente\n");
            }

        }while(invalido);



        printf("\n");

  }

}


int main()
{
    int i;
    Pessoa p[num_pessoas];

    func_pessoa(p);

    for(i=0; i<num_pessoas; i++)
    {
        printf("PESSOA [%d] Sexo: %c\n", i+1, p[i].sexo);

        switch(p[i].cor_olho)
        {
            case 1: printf("PESSOA [%d] Cor Olho: AZUL\n"); break;
            case 2: printf("PESSOA [%d] Cor Olho: VERDE\n"); break;
            case 3: printf("PESSOA [%d] Cor Olho: CASTANHO\n"); break;
        }

       switch(p[i].cor_cabelo)
        {
            case 1: printf("PESSOA [%d] Cor Cabelo: LOIRO\n"); break;
            case 2: printf("PESSOA [%d] Cor Cabelo: PRETO\n"); break;
            case 3: printf("PESSOA [%d] Cor Cabelo: CASTANHO\n"); break;
        }

        printf("PESSOA [%d] Idade: %d\n", i+1, p[i].idade);
        printf("\n");
    }



    return 0;
}
