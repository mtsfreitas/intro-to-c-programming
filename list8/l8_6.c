#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SOLTEIRO 0
#define CASADO 1
#define VIUVO 2

struct Endereco{
    char rua[200];
    char bairro[200];
    char cidade[200];
    char estado[3];
    char cep[20];
};

struct Cadastro{
    char nome[200];
    struct Endereco endereco;
    float salario;
    char identidade[20];
    char cpf[20];
    int estado_civil;
    char telefone[50];
    int idade;
    char sexo;
};

int main()
{
    struct Cadastro cadastros[5];
    int i, maior_idade, i_maior_idade, id_temp;

    for(i = 0; i < 5; i++){
        printf("Cadastro %d:\n\n", i+1);
        printf("Nome: ");
        scanf("%[^\n]199", cadastros[i].nome);
        getchar();
        printf("Identidade: ");
        scanf("%[^\n]19", cadastros[i].identidade);
        getchar();
        printf("Telefone: ");
        scanf("%[^\n]49", cadastros[i].telefone);
        getchar();
        printf("CPF: ");
        scanf("%[^\n]19", cadastros[i].cpf);
        getchar();
        printf("Idade: ");
        scanf("%d", &cadastros[i].idade);
        getchar();
        if(i == 0){
            maior_idade = cadastros[i].idade;
            i_maior_idade = i;
        } else{
            if(cadastros[i].idade > maior_idade){
                maior_idade = cadastros[i].idade;
                i_maior_idade = i;
            }
        }
        printf("Salario: ");
        scanf("%f", &cadastros[i].salario);
        getchar();
        printf("Estado Civil: ");
        scanf("%d", &cadastros[i].estado_civil);
        getchar();
        printf("Sexo (M ou F): ");
        scanf("%c", &cadastros[i].sexo);
        getchar();
        printf("\nDados de endereco:\n\n");
        printf("Rua: ");
        scanf("%[^\n]199", cadastros[i].endereco.rua);
        getchar();
        printf("Bairro: ");
        scanf("%[^\n]199", cadastros[i].endereco.bairro);
        getchar();
        printf("Cidade: ");
        scanf("%[^\n]199", cadastros[i].endereco.cidade);
        getchar();
        printf("Estado (sigla): ");
        scanf("%[^\n]2", cadastros[i].endereco.estado);
        getchar();
        printf("CEP: ");
        scanf("%[^\n]19", cadastros[i].endereco.cep);
        getchar();
        printf("\n----------------\n\n");
    }

    printf("-> Dados da pessoa com maior idade:\n\n");
    printf("-> Nome: %s\n", cadastros[i_maior_idade].nome);
    printf("-> Identidade: %s\n", cadastros[i_maior_idade].identidade);
    printf("-> Idade: %d\n", cadastros[i_maior_idade].idade);

    printf("\n\n-> Pessoas do sexo masculino: ");
    for(i = 0; i < 5; i++){
        if(cadastros[i].sexo == 'M')
            printf("%s\n", cadastros[i].nome);
    }

    printf("\n\n-> Pessoas com salarios maiores do que 1000: ");
    for(i = 0; i < 5; i++){
        if(cadastros[i].salario > 1000){
            printf("%s", cadastros[i].nome);
        }
    }

    printf("\n\nEntre com a identidade da pessoa a ser procurada:\n");
    scanf("%[^\n]19", &id_temp);

    for(i = 0; i < 5; i++){
        if(strcmp(cadastros[i].identidade, id_temp) == 0){
            printf("-> Nome: %s\n", cadastros[i].nome);
            printf("-> Identidade: %s\n", cadastros[i].identidade);
            printf("-> Telefone: %s\n", cadastros[i].telefone);
            printf("-> CPF: %s\n", cadastros[i].cpf);
            printf("-> Idade: %d\n", cadastros[i].idade);
            printf("-> Salario: %f\n", cadastros[i].salario);
            printf("-> Estado civil: ");
            switch(cadastros[i].estado_civil){
                case SOLTEIRO:
                    printf("Solteiro\n");
                    break;

                case CASADO:
                    printf("Casado\n");
                    break;

                case VIUVO:
                    printf("Viuvo\n");
                    break;
            }
            printf("-> Sexo: ");
            if(cadastros[i].sexo == 'M')
                printf("Masculino\n");
            else
                printf("Feminino\n");
            printf("-> Rua: %s\n", cadastros[i].endereco.rua);
            printf("-> Bairro: %s\n", cadastros[i].endereco.bairro);
            printf("-> Cidade: %s\n", cadastros[i].endereco.cidade);
            printf("-> Estado: %s\n", cadastros[i].endereco.estado);
            printf("-> CEP: %s\n", cadastros[i].endereco.cep);
        }
    }
    return 0;
}
