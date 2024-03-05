#include<stdio.h>

int main()
{
    int i;
    int c[5];

    for (i=0; i<=4; i++)
    {
        printf("Unesite vrednost elementa sa indeksom %d: ", i);
        scanf("%d", &c[i]);
    }

    printf("\nIspis vrednosti elemenata niza\n\n");

    for (i=0; i<=4; i++)
    {
        printf("Vrednost elementa ciji je indeks %d je %d\n", i, c[i]);
    }

    return 0;
}