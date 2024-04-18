#include<stdio.h>
#include<time.h>

int main()
{

    int aiNiz[10];
    int iDonjaGranica = 500;
    int iGornjaGranica = 5000;
    int iIndeks;
    int iZbir = 0;
    float fProsek;

    srand(time(0));

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        aiNiz[iIndeks] = (rand() % (iGornjaGranica - iDonjaGranica + 1) + iDonjaGranica);
        iZbir = iZbir + aiNiz[iIndeks];
    }

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        printf("Indeks: %d Vrednost: %d\n", iIndeks, aiNiz[iIndeks]);
    }

    printf("Zbir: %d\n", iZbir);
    printf("Prosek: %.2f", (float)iZbir/10);

    return 0;
}