#include <stdio.h>
#include <stdlib.h>

#define A 5
#define V 5

struct voos{
    int codigo_origem;
    int codigo_destino;
};

struct aeroporto{
    int codigo;
    int qtd_voos_saem;
    int qtd_voos_chegam;
};

int main()
{
    int i, j, falhou;

    struct voos fluxoVoos[V];
    struct aeroporto fluxoAeroportos[A];

    printf("-----------\nInsercao dos aeroportos:\n-----------\n\n");

    for(i=0; i<A; i++)
    {

        fluxoAeroportos[i].codigo = i;
        printf("Codigo do aeroporto: %d\n", fluxoAeroportos[i].codigo);

        printf("Quantidade de voos que saem: ");
        scanf(" %d", &fluxoAeroportos[i].qtd_voos_saem);

        printf("Quantidade de voos que chegam: ");
        scanf(" %d", &fluxoAeroportos[i].qtd_voos_chegam);
        printf("\n");
    }
    printf("\n\n");
    printf("-----------\nInsercao dos voos:\n-----------\n\n");

    for(i=0; i<V; i++)
    {
        printf("Codigo de ORIGEM do voo: ");
        scanf(" %d", &fluxoVoos[i].codigo_origem);

        falhou = 0;
        for(j = 0; j < A; j++){
            if(fluxoVoos[i].codigo_origem == fluxoAeroportos[j].codigo){
                if(fluxoAeroportos[j].qtd_voos_saem <= 0){
                    falhou = 1;
                } else{
                    fluxoAeroportos[j].qtd_voos_saem--;
                }
                break;
            }
        }

        if(falhou || j == A){
            if(falhou)
                printf("Voo invalido, pois esgotou a quantidade de voos que saem deste aeroporto!\n");
            else
                printf("Codigo de aeroporto nao encontrado!\n");
            i--;
        }
        else{

            printf("Codigo de DESTINO do voo: ");
            scanf(" %d", &fluxoVoos[i].codigo_destino);
            falhou = 0;
            for(j = 0; j < A; j++){
                if(fluxoVoos[i].codigo_destino == fluxoAeroportos[j].codigo){
                    if(fluxoAeroportos[j].qtd_voos_chegam <= 0){
                        printf("Voo invalido, pois esgotou a quantidade de voos que chegam neste aeroporto!\n");
                        fluxoAeroportos[j].qtd_voos_saem++;
                        falhou = 1;
                    } else{
                        fluxoAeroportos[j].qtd_voos_chegam--;
                    }
                    break;
                }
            }

            if(falhou || j == A){
                if(falhou)
                    printf("Voo invalido, pois esgotou a quantidade de voos que saem deste aeroporto!\n");
                else
                    printf("Codigo de aeroporto nao encontrado!\n");
                i--;
            }
            else
                if(fluxoVoos[i].codigo_origem == fluxoVoos[i].codigo_destino){
                    printf("Codigos informados invalidos.\n");
                    i--;
                }
        }

        printf("\n");

    }

    return 0;
}
