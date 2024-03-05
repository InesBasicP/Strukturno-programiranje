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

    printf("\nIspis vrednosti elemenata niza vecih od 20\n\n");

    for (i=0; i<=4; i++)
    {   
        if (c[i] > 20)
        {
            printf("%d\n", c[i]);
        }
    }

    return 0;
}