#include<stdio.h>

int main()
{
    int a[2][2][5] = {{{6, 6, 8, 10, 7}, {9, 9, 8, 7, 10}}, {{8, 9, 10, 10, 10}, {7, 7, 8, 6, 10}}};
    int b[2][2][5];

    printf("Ispis vrednosti elemenata niza b\n\n");

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            for (int k = 0; k <= 4; k++)
            {
                b[i][j][k] = a[i][j][k];
                printf("Indeks tabele: %d  Indeks reda: %d  Indeks kolone: %d  Vrednost: %d\n", i, j, k, b[i][j][k]);
            }
        }

        printf("-------------------------------------------------------------\n");
    }

    return 0;
}