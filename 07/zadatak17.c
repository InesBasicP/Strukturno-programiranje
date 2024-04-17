#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int aiNiz[10] = {12,3,8,90,150,6,37,23,88,47};
    int iBrojElemenata, iIndexMin, iMinVrednost;
    int iIndeks;
    int iZbir = 0;
    float fProsek, fMinOdstupanje, fOdstupanje;

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        iZbir = iZbir + aiNiz[iIndeks];
    }

    iBrojElemenata = sizeof(aiNiz) / sizeof(int);
    fProsek = (float)iZbir / (float)iBrojElemenata;

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        fOdstupanje = abs(fProsek - aiNiz[iIndeks]);

        if(iIndeks == 0)
        {
            fMinOdstupanje = fOdstupanje;
        }

       if(fOdstupanje < fMinOdstupanje)
       {
            fMinOdstupanje = fOdstupanje;
            iIndexMin = iIndeks;
            iMinVrednost = aiNiz[iIndexMin];
       }
    }

    printf("Trazeni element ima indeks: %d i vrednost %d", iIndexMin, iMinVrednost);

    return 0;

}