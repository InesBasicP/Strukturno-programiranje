#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int *pAdresa = NULL;
    int iBrojUnetihOcena = 0;
    int iUnos, iIndeks;

    do
    {
        printf("Unesite broj: ");
        scanf("%d", &iUnos);

        if(iUnos != -1)
        {
            if(iBrojUnetihOcena == 0)
            {
                pAdresa = malloc(sizeof(int));
            }
            else
            {
                pAdresa = realloc(pAdresa, (iBrojUnetihOcena+1)*sizeof(int));
            }

            if(pAdresa == 0)
            {
                printf("Alociranje neuspesno.");
                return (-1);
            }
            else
            {
                pAdresa[iBrojUnetihOcena] = iUnos;
                iBrojUnetihOcena++;
            }
        }
    } while (iUnos != -1);

    printf("Ispis elemenata niza: \n");

    for(iIndeks=0; iIndeks<iBrojUnetihOcena; iIndeks++)
    {
        printf("Indeks: %d  Vrednost: %d\n", iIndeks, pAdresa[iIndeks]);
    }
    
    free(pAdresa);
    pAdresa = NULL;

    return 0;
}