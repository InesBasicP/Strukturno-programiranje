#include<stdio.h>
int main ()
{

    int iPocetnaGodina, iKrajnjaGodina;
    void ispisiPrestupne(int, int);


    printf("Unesite pocetnu godinu: ");
    scanf("%d", &iPocetnaGodina);

    printf("Unesite krajnju godinu: ");
    scanf("%d", &iKrajnjaGodina);

    printf("U intervalu od %d do %d prestupne godine su: \n", iPocetnaGodina, iKrajnjaGodina);
    ispisiPrestupne(iPocetnaGodina, iKrajnjaGodina);

    return 0;
}

void ispisiPrestupne(int iPrvaGodina, int iDrugaGodina)
{
    int iIndex;
     
    for(iIndex = iPrvaGodina; iIndex <= iDrugaGodina; iIndex++)
    {
        if(iIndex % 4 == 0 && iIndex % 100 != 0)
        {
            printf("%d.\n", iIndex);
        }
    }
}

