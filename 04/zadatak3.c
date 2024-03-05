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
        printf("%d\n", c[i]*2);
    }

    return 0;
}