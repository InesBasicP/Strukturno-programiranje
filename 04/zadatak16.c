#include<stdio.h>

int main()
{
    int a[2][2] = {{10, 20}, {30, 40}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int c[2][2];

    for (int i = 0; i<=1; i++)
    {
        for(int j = 0; j<=1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];

            printf("Indeks reda: %d  Indeks kolone:  %d  Vrednost: %d\n", i, j, c[i][j]);
        }
    }

    return 0;
}