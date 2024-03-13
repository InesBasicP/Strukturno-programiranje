#include<stdio.h>

int main()
{

    int i, iPrvacifra, iDrugaCifra, iTrecaCifra, iInverzna;

    for(i=100; i<=999; i++)
    {
        iPrvacifra = i / 100;
        iDrugaCifra = (i - (100*iPrvacifra)) / 10;
        iTrecaCifra = i % 10;
        iInverzna = iTrecaCifra*100 + iDrugaCifra*10 + iPrvacifra;

        if(i > iInverzna*8)
        {
            printf("U opsegu postoji broj koji je veci od osmostruke vrednosti svog inverznog zapisa.");
            break;
        }
    }
    return 0;
}