#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int* pAdresa;
    int iIndeks;
    int iNoviBroj;

    pAdresa = malloc(3 * sizeof(int));

    if(pAdresa == NULL)
    {
        printf("Alociranje nije uspelo.");
        return (-1);
    }
    else
    {
        printf("Unesite 1. broj: ");
        scanf("%d", &pAdresa[0]);

        printf("Unesite 2. broj: ");
        scanf("%d", &pAdresa[1]);

        printf("Unesite 3. broj: ");
        scanf("%d", &pAdresa[2]);

        printf("Uneli ste tri broja. Koliko jos zelite?");
        scanf("%d", &iNoviBroj);

        pAdresa = realloc(pAdresa, (iNoviBroj+3)*sizeof(int));

        if(pAdresa == NULL)
        {
            printf("Realociranje nije uspelo.");
            return (-1);
        }
        else
        {
            for(iIndeks=3; iIndeks<iNoviBroj+3; iIndeks++)
            {
                printf("Unesite %d broj: ", iIndeks+1);
                scanf("%d", &pAdresa[iIndeks]);
            }
        }

        printf("Uneti su sledeci brojevi:\n");
        for(iIndeks=0; iIndeks<iNoviBroj+3; iIndeks++)
        {
            printf("Indeks: %d  Vrednost: %d\n", iIndeks, pAdresa[iIndeks]);
        }
    }

    free(pAdresa);
    pAdresa = NULL;

    return 0;
}