#include <stdio.h>
#include <stdlib.h>
#define NUMALUNOS 10

struct dadosAlunos{
    char nome[30];
    int matricula;
    float mediaFinal;

};

int main()
{
    struct dadosAlunos dAlunos[NUMALUNOS];
    int aprovados[NUMALUNOS], reprovados[NUMALUNOS];
    int i;

    for(i=0; i<NUMALUNOS; i++)
    {
        printf("Nome: ");
        scanf(" %[^\n]s", &dAlunos[i].nome);

        printf("Matricula: ");
        scanf(" %d", &dAlunos[i].matricula);

        printf("Media Final: ");
        scanf(" %f", &dAlunos[i].mediaFinal);

        printf("\n");
    }

    for(i=0; i<NUMALUNOS; i++)
    {
        aprovados[i] = 999;
        reprovados[i] = 999;
    }

    for(i=0; i<NUMALUNOS; i++)
    {
        if(dAlunos[i].mediaFinal >=5)
            aprovados[i] = dAlunos[i].mediaFinal;
        else
            reprovados[i] = dAlunos[i].mediaFinal;
    }

    for(i=0; i<NUMALUNOS; i++)
    {
        if(aprovados[i] == dAlunos[i].mediaFinal)
        {
            printf("ALUNO [APROVADO]\nNome: %s\nMatricula: %d\nMedia Final: %.2f\n", dAlunos[i].nome, dAlunos[i].matricula, dAlunos[i].mediaFinal);
            printf("\n");
        }
        else
            {
                printf("ALUNO [REPROVADO]\nNome: %s\nMatricula: %d\nMedia Final: %.2f\n", dAlunos[i].nome, dAlunos[i].matricula, dAlunos[i].mediaFinal);
                printf("\n");
            }
    }

    return 0;
}
