#include<stdio.h>

int main()
{
    int aiBrojevi[10]={5, 8, 1, 3, 9, 4, 6, 7, 15, 2};
    int i;

    for(i=1; i<=9; i++)
    {
        if( aiBrojevi[i] < aiBrojevi[i-1])
        {
            printf("Indeks: %d   Vrednost: %d\n" , i, aiBrojevi[i]);
        }
    }

    return 0;
}