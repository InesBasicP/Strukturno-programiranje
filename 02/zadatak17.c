#include <stdio.h>

int main ()
{

    int iSati, iMinuti, iSekunde, iTrajanje, iSati2, iMinuti2, iSekunde2, iSati3, iMinuti3, iSekunde3, iDodatniSati, iDodatniMinuti ;

    printf("Unesite sat polaska: ");
    scanf("%d", &iSati);

    printf("Unesite minute polaska: ");
    scanf("%d", &iMinuti);

    printf("Unesite sekunde polaska: ");
    scanf("%d", &iSekunde);

    printf("Unesite duzinu trajanja puta u sekundama: ");
    scanf("%d", &iTrajanje);

    iSati2 = iTrajanje / 3600;
    iMinuti2 = (iTrajanje - (iSati2*3600)) / 60;
    iSekunde2 = iTrajanje - iMinuti2*60 - iSati2*3600;

    iSati3 = iSati + iSati2;
    iSati3 = iSati3 % 24;
    iMinuti3 = iMinuti + iMinuti2;

    if (iMinuti3 > 60)
    {
        iDodatniSati = iMinuti3 / 60;
        iSati3 = iSati3 + iDodatniSati;
        iMinuti3 = iMinuti3 % 60;
    }

    iSekunde3 = iSekunde + iSekunde2;

    if (iSekunde3 > 60)
    {
        iDodatniMinuti = iSekunde3 / 60;
        iMinuti3 = iMinuti3 + iDodatniMinuti;
        iSekunde3 = iSekunde3 % 60;
    }

    printf("Voz stize na odrediste u: %d h %d min i %d sec.", iSati3, iMinuti3, iSekunde3);

    return 0; 
}