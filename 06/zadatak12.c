#include<stdio.h>
int main()
{

    int aiBrojevi[10] = {5,8,1,3,9,4,6,7,15,2};
    int aiKopija[10];
    int iIndeks;
    int *piBroj = NULL;

    piBroj = &aiBrojevi[0];

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        aiKopija[iIndeks] = *(piBroj + iIndeks);
    }

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        printf("Indeks:%d   Vrednost:%d\n", iIndeks, aiKopija[iIndeks]);
    }

return 0;
}

