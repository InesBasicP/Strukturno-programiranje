#include<stdio.h>

int main()
{
    int aiBrojevi[10]={5, 8, 1, 3, 9, 4, 6, 7, 15, 2};
    int i;

    printf("Ispis vrednosti elemenata niza\n");

    for (i=0; i<=9; i++)
    {
        if(aiBrojevi[i] % 2 != 0)
        {
            printf("Indeks: %d Vrednost: %d\n", i, 555);
        }
        else
        {
            printf("Indeks: %d Vrednost: %d\n", i, aiBrojevi[i]);
        }
    }

    return 0;
}