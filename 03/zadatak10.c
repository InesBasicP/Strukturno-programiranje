#include<stdio.h>
int main ()
{

    int iPrvaCifra, iPetaCifra;
    int const iDrugaCifra = 2, iTrecaCifra = 4, iCetvrtaCifra = 4;
    int iZbirKvadrata, iPIN;

    for (iPrvaCifra=1; iPrvaCifra<=9; iPrvaCifra++)
    {
        for(iPetaCifra=0; iPetaCifra<=9; iPetaCifra++)
        {
            iPIN = iPrvaCifra*10000 + iDrugaCifra*1000 + iTrecaCifra*100 + iCetvrtaCifra*10 + iPetaCifra; 
            iZbirKvadrata = iPrvaCifra*iPrvaCifra + iDrugaCifra*iDrugaCifra + iTrecaCifra*iTrecaCifra + iCetvrtaCifra*iCetvrtaCifra + iPetaCifra*iPetaCifra;

            if(iPIN % iZbirKvadrata == 0)
            {
                printf("PIN kod je %d." , iPIN);
            }
        }
    }

    return 0;
}