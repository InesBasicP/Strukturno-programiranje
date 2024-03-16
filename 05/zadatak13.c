#include<stdio.h>
#include <stdbool.h>

int main ()
{

    int iGodina, iMesec, iDan, iDanaUGodini;
    int aiPrestupna[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int aiNePrestupna[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    bool Prestupna; 
    int iSuma = 0;

    printf("Unesite godinu: ");
    scanf("%d", &iGodina);

    printf("Unesite redni broj meseca: ");
    scanf("%d", &iMesec);

    printf("Unesite dan: ");
    scanf("%d", &iDan);

    if((iGodina%4 == 0 && iGodina%100 != 0) || (iGodina%4 == 0 && iGodina%100 == 0 && iGodina%400 == 0))
    {
        Prestupna = true;
    }
    else
    {
        Prestupna = false;
    }

    for(int i=0; i<=iMesec-2; i++)
    {
        if (Prestupna == true)
        {
            iSuma = aiPrestupna[i] + iSuma;
        }
        else
        {
            iSuma = aiNePrestupna[i] + iSuma;
        }
    }

    iSuma = iSuma + iDan;

    printf("%d.%d.%d. je %d. dan u godini.", iDan, iMesec, iGodina, iSuma);



    return 0;
}