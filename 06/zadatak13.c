#include<stdio.h>
int main()
{

    int aiNiz[10];
    int iVrednost, iPovecanje, iIndeks;
    int *piBroj = NULL;
    
    piBroj = &aiNiz[0];

    printf("Vrednost elementa sa indeksom 0?");
    scanf("%d", &iVrednost);
    aiNiz[0] = iVrednost;

    printf("Povecanje?");
    scanf("%d", &iPovecanje);

    printf("Ispis vrednosti elemenata niza\n");

    printf("Indeks:%d    Vrednost %d\n", 0, iVrednost);

    for(iIndeks=1; iIndeks<=9; iIndeks++)
    {
        aiNiz[iIndeks] = *(piBroj + iIndeks - 1) + iPovecanje;
        printf("Indeks:%d    Vrednost %d\n", iIndeks, aiNiz[iIndeks]);
    }

    return 0;
}