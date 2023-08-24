#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float nota1;
    float nota2;
    float nota3;

}notas;

typedef struct{
    int matricula;
    char nome[30];
    notas avaliacoes;

}aluno;




void alunonotas(int mat, char nome[30], float n1, float n2, float n3)
{
    float media;
    media = ((n1+n2+n3)/3);
    printf("Matricula: %d\nNome: %s\nMedia: %.2f\n", mat, nome, media);
    if(media>=8.5)
    {
        printf("Conceito: Excelente\n\n");
    }
    else
        if(media>=7 && media <=8.5)
        {
            printf("Conceito: Bom\n\n");
        }
        else
        {
            printf("Conceito: Preocupante\n\n");
        }

}


int main()
{
    FILE *arquivo4;

    int i=0;
    aluno alunos[50];

    if ((arquivo4 = fopen("alunos.txt", "r")) == NULL)
    {
        printf("Nao foi possivel abrir o arquivo alunos.txt\n");
        return 0;
    }


    while(!feof(arquivo4))
    {
        fscanf(arquivo4, "%d; %[^;]s", &alunos[i].matricula, alunos[i].nome);
        fscanf(arquivo4, ";%f;%f;%f",  &alunos[i].avaliacoes.nota1, &alunos[i].avaliacoes.nota2, &alunos[i].avaliacoes.nota3);

        alunonotas(alunos[i].matricula, alunos[i].nome, alunos[i].avaliacoes.nota1, alunos[i].avaliacoes.nota2, alunos[i].avaliacoes.nota3);
        i++;

    }




    fclose(arquivo4);

    return 0 ;
}
