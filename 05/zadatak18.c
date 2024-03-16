#include<stdio.h>
int main ()
{
    int aiNiz[10] = {12, 3, 8, 90,150, 6, 37, 23, 88, 47};
    int iIndex;
    int iBrojac = 0;
    int iZbir = 0;
    float fProsek;

    for(iIndex=0; iIndex<=9; iIndex++)
    {
        if(aiNiz[iIndex] % 2 != 0 && aiNiz[iIndex] > 10)
        {
            iBrojac++;
            iZbir = iZbir + aiNiz[iIndex];
        }
    }

    fProsek = (float)iZbir / (float)iBrojac;

    printf("Ukupno: %d\n", iBrojac);
    printf("Zbir: %d\n", iZbir);
    printf("Prosek: %.2f", fProsek);











    return 0;
}