#include <stdio.h>

int main ()
{

    int iBroj, iCifra1, iCifra2, iCifra3;

    printf("Unesite broj: ");
    scanf("%d" , &iBroj);

    iCifra1 = iBroj / 100;
    iCifra2 = (iBroj - iCifra1*100) / 10;
    iCifra3 = iBroj - (iCifra1*100) - (iCifra2*10);

    if (iBroj == iCifra1*iCifra1*iCifra1 + iCifra2*iCifra2*iCifra2 + iCifra3*iCifra3*iCifra3)
    {
        printf("Broj %d je Armstrongov broj." , iBroj);
    }

    else if (iBroj < 100 || iBroj > 999)
    {
        printf("Greska.");
    }

    else
    {
        printf("Broj %d nije Armstrongov broj." , iBroj);
    }
    
    return 0;
}