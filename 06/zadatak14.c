#include<stdio.h>
int main()
{

    int aiNiz[10] = {12,3,8,90,150,6,37,23,88,47};
    int iZbir = 0; 
    int iBrojElemenata = 10;
    float fProsek;
    int iIndeks;
    int *piBroj = NULL;
    piBroj = &aiNiz[0];

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        iZbir = iZbir + *(piBroj + iIndeks);
    }

    printf("Zbir: %d\n", iZbir);
    printf("Prosek je: %.2f", (float)iZbir/(float)iBrojElemenata);


    return 0;
}