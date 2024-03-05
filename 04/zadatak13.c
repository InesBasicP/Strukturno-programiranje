#include<stdio.h>
int main ()
{

    int aiBrojevi[2][3];
    int iRed;
    int iKolona;
    int iVrednost;

    for(iRed=0; iRed<=1; iRed++)
    {
        for(iKolona=0; iKolona<=2; iKolona++)
        {
            printf("Indeks reda: %d Indeks kolone: %d Unesite vrednost: ", iRed, iKolona);
            scanf("%d", &iVrednost);
            aiBrojevi[iRed][iKolona] = iVrednost;
        }
    }

    printf("Ispis vrednosti elemenata niza vecih od 10\n");

    for(iRed=0; iRed<=1; iRed++)
    {
        for(iKolona=0; iKolona<=2; iKolona++)
        {
            if (aiBrojevi[iRed][iKolona]>10)
            {
                 printf("Indeks reda: %d Indeks kolone: %d Vrednost: %d\n", iRed, iKolona, aiBrojevi[iRed][iKolona]);
            }
            
        }
    }

    return 0;
}