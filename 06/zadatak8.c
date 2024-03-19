#include<stdio.h>
int main ()
{

    int aiNiz[5];
    int iIndeks;
    int *piNiz = &aiNiz[0];
   

    for(iIndeks=0; iIndeks<=4; iIndeks++)
    {
        printf("Unesite vrednost elementa sa indeksom %d: ", iIndeks);
        scanf("%d", &aiNiz[iIndeks]);
    }

    printf("Ispis vrednosti elementa niza:\n");

     for(iIndeks=0; iIndeks<=4; iIndeks++)
    {
        printf("Vrednost elementa ciji je indeks %d je %d.\n", iIndeks, (*piNiz++));
    }

    return 0;
}