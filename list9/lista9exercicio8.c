#include <stdio.h>
#include <stdlib.h>

float pessoa(float altura, char sexo)
{
  float pesoideal;

  if(sexo=='m' || sexo=='M')
  {
     pesoideal = ((72.7 * altura)-58);
  }
  else
    if(sexo=='f' || sexo=='F')
    {
      pesoideal = ((62.1 * altura)-44.7);
    }

    return pesoideal;

}


int main()
{
    float alt, pesoideal;
    char mf;

    printf("Informe o sexo [M] ou [F]: ");
    scanf(" %c", &mf);

    if(!(mf=='m' || mf=='M' || mf=='f' || mf=='F'))
    {
        printf("\nLetra invalida.\n");
        return 0;
    }

    printf("Informe a altura: ");
    scanf(" %f", &alt);

    pesoideal = pessoa(alt, mf);
    printf("\nPeso ideal: %f\n", pesoideal);


    return 0;

}
