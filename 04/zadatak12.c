#include<stdio.h>
int main ()
{

    int aiBrojevi[2][3];
    int iRed;
    int iKolona;

    for(iRed=0; iRed<=1; iRed++)
    {
        for(iKolona=0; iKolona<=2; iKolona++)
        {
            printf("Indeks reda: %d Indeks kolone: %d Unesite vrednost: ", iRed, iKolona);
            scanf("%d", &aiBrojevi[iRed][iKolona]);
        }
    }

    printf("Ispis vrednosti elemenata niza\n");

    for(iRed=0; iRed<=1; iRed++)
    {
        for(iKolona=0; iKolona<=2; iKolona++)
        {
            printf("Indeks reda: %d Indeks kolone: %d Vrednost: %d\n", iRed, iKolona, aiBrojevi[iRed][iKolona]);
        }
    }

    return 0;
}