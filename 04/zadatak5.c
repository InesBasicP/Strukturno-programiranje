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
        if (i % 2 == 0)
        {
            printf("Indeks: %d Vrednost: %d\n", i, c[i]*2);
        }
        else
        {
            printf("Indeks: %d Vrednost: %d\n", i, c[i]*3);
        }
    }

    return 0;
}