#include<stdio.h>
#include<time.h>

int main ()
{
    
    int aiNiz[10], iDonjaGranica, iGornjaGranica,iIndeks, iGlupost, iGlupost2;

    iDonjaGranica = 150;
    iGornjaGranica = 250;

    srand(time(NULL));
    
    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        aiNiz[iIndeks] = (rand() % (iGornjaGranica - iDonjaGranica + 1) + iDonjaGranica);
    }

    for (iIndeks=0; iIndeks<=9; iIndeks++)
    {
        printf("Indeks: %d, Vredost: %d\n", iIndeks, aiNiz[iIndeks]);
    }

    return 0;
}