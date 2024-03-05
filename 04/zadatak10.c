#include<stdio.h>

int main()
{
    int aiBrojevi[10]={5, 8, 1, 3, 9, 4, 6, 7, 15, 2};
    int aiKopija[10];
    int i;

    printf("Ispis vrednosti elemenata niza kopije\n");

    for (i = 0; i <= 9; i++)
    {
        aiKopija[i] = aiBrojevi[i];
        printf("Indeks: %d Vrednost: %d\n", i, aiKopija[i]);
    }
    return 0;
}