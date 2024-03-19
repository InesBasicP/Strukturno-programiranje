#include<stdio.h>
int main()
{

    int aiNiz[10];
    int iIndeks;
    int *piNiz = &aiNiz[0];
    // piNiz = aiNiz;
    // int *piNiz = aiNiz;

    for(iIndeks=0; iIndeks<=4; iIndeks++)
    {
        printf("Unesite vrednost elementa sa indeksom %d: ", iIndeks);
        scanf("%d", aiNiz + iIndeks);
    }

    *(piNiz + 5) = *aiNiz;
    *(piNiz + 6) = *(piNiz + 1) + *(piNiz + 3);
    *(piNiz + 7) = *(piNiz + 4) - *(piNiz + 2);
    *(piNiz + 8) = *(piNiz + 2) * *(piNiz + 7);
    *(piNiz + 9) = *(piNiz + 6) * 4;

    printf("Ispis vrednosti elemenata niza:\n");

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        printf("Indeks:%d   Vrednost:%d\n", iIndeks, (*piNiz++));
    }



    return 0;
}