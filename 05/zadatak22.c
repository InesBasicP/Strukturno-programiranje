#include<stdio.h>
#include<math.h>
int main ()
{

    int aiNiz[10] = {12,3,8,90,150,6,37,23,88,47};
    int iBrojElemenata = 10, iIndexMin, iMinVrednost;
    int iIndeks;
    int iZbir = 0;
    float fProsek, fMinOdstupanje, fOdstupanje;


    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        iZbir = iZbir + aiNiz[iIndeks];
    }

    fProsek = (float)iZbir / (float)iBrojElemenata;
    printf("Prosek: %.2f\n", fProsek);

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        fOdstupanje = fabs((float)aiNiz[iIndeks] - fProsek);

        if (iIndeks == 0)
        {
            fMinOdstupanje = fOdstupanje;
        }

        if (fOdstupanje < fMinOdstupanje)
        {
            fMinOdstupanje = fOdstupanje;
            iIndexMin = iIndeks;
            iMinVrednost = aiNiz[iIndeks];
        }
    }

    printf("Trazeni element ima indeks: %d i vrednost %d", iIndexMin, iMinVrednost);

    return 0;
}