#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eleitores, i, voto, voto_nulo=0, voto_branco=0, candidatos[4];
    float percentual_56;
    printf("Informe o numero de eleitores: ");
    scanf("%d", &eleitores);

    for(i=0; i < 4; i++)
    {
        candidatos[i] = 0;
    }

    for(i=0; i < eleitores; i++)
    {
        printf("\nInforme o voto:\n[1][2][3][4] = Candidatos\n[5] = voto nulo\n[6] = voto branco\n\n");
        scanf("%d", &voto);
        switch(voto)
        {
            case 1: candidatos[0] += 1; break;
            case 2: candidatos[1] += 1; break;
            case 3: candidatos[2] += 1; break;
            case 4: candidatos[3] += 1; break;
            case 5: voto_nulo++; break;
            case 6: voto_branco++; break;
            default: printf("\nOpcao invalida\n"); i--;
        }
    }

    percentual_56 = (((float)(voto_nulo+voto_branco)/eleitores)*100);

    printf("\nCandidato[1] = %d voto(s)\nCandidato[2] = %d voto(s)\nCandidato[3] = %d voto(s)\nCandidato[4] = %d voto(s)\nVoto(s) nulo = %d\nVoto(s) branco = %d\nPercentual de votos brancos e nulos sobre o total: %.1f%%\n",
            candidatos[0], candidatos[1], candidatos[2], candidatos[3], voto_nulo, voto_branco, percentual_56);

    return 0;
}
