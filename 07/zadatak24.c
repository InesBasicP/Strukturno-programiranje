#include<stdio.h>
#include<time.h>

int main ()
{
    int aiNiz[10];
    void PopuniNiz(int[], int, int, int);
    void Ispisi(int[], int);

    PopuniNiz(aiNiz, 10, 15, 1000);
    Ispisi(aiNiz, 10);

    return 0;
}

void PopuniNiz(int aiNiz[], int iBrojElemenata, int iDonjaGranica, int iGornjaGranica)
{
    srand(time(0));

    for (int iIndeks = 0; iIndeks < iBrojElemenata; iIndeks++)
    {
        aiNiz[iIndeks] = (rand() % (iGornjaGranica - iDonjaGranica + 1) + iDonjaGranica);
    }
}

void Ispisi(int aiNiz[], int iBrojElemenata)
{
    for(int iIndeks=0; iIndeks < iBrojElemenata; iIndeks++)
    {
        printf("Indeks: %d   Vrednost: %d\n", iIndeks, aiNiz[iIndeks]);
    } 
}