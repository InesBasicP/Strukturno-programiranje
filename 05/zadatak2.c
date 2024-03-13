#include <stdio.h>
int main()
{

    int i, iPrvaCifra, iDrugaCifra, iTrecaCifra, iInverzna;
    int iBrojac = 0;

    for(i=100; i<=999; i++)
    {
        iPrvaCifra = i / 100;
        iDrugaCifra = (i - (100*iPrvaCifra)) / 10;
        iTrecaCifra = i % 10;
        iInverzna = iTrecaCifra*100 + iDrugaCifra*10 +iPrvaCifra;
        
        if(i > 8*iInverzna)
        {
            iBrojac++;
        }
    }

    printf("Ukupno: %d", iBrojac);

    return 0;
}