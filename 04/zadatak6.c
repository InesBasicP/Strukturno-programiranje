#include<stdio.h>

int main()
{
    int i;
    int c[10];

    for (i=0; i<=4; i++)
    {
        printf("Unesite vrednost elementa sa indeksom %d: ", i);
        scanf("%d", &c[i]);
    }

    printf("\nIspis vrednosti elemenata niza\n\n");
    
    for (i=0; i<=4; i++)
    {
        printf("Indeks: %d Vrednost: %d\n", i, c[i]);
    }

    c[5] = c[0];
    c[6] = c[1]+c[3];
    c[7] = c[4]-c[2];
    c[8] = c[2]*c[7];
    c[9] = c[6]*4;

    for (i=5; i<=9; i++)
    {   
        if (i == 5)
        {
            printf("Indeks: %d Vrednost: %d\n", i, c[5]);
        }
        else if (i == 6)
        {
            printf("Indeks: %d Vrednost: %d\n", i, c[6]);
        }
        else if (i == 7)
        {
            printf("Indeks: %d Vrednost: %d\n", i, c[7]);
        }
        else if (i == 8)
        {
            printf("Indeks: %d Vrednost: %d\n", i, c[8]);
        }
        else if (i == 9)
        {
            printf("Indeks: %d Vrednost: %d\n", i, c[9]);
        }
    }

    return 0;
}