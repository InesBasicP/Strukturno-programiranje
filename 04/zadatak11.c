#include<stdio.h>
int main ()
{

    int aiBrojevi[10];
    int i;
    int iPovecanje;

    printf("Vrednost elementa sa indeksom 0? ");
    scanf("%d" , &aiBrojevi[0]);

    printf("Povecanje? ");
    scanf("%d", &iPovecanje);

    printf("Ispis vrednosti elemenata niza\n");

    printf("Indeks: %d  Vrednost: %d\n" , 0, aiBrojevi[0]);

    for (i=1; i<=9; i++)
    {
        aiBrojevi[i] = aiBrojevi[i-1]+iPovecanje;
        printf("Indeks: %d  Vrednost: %d\n", i, aiBrojevi[i]);
    }


    return 0;
}