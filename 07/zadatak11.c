#include<stdio.h>
#include<stdbool.h>

int main ()
{

    int aiNiz[5] = {18,4,177,2,29};
    void Sortiraj (int*, int);
    void Ispisi(int*, int);
    int iIndeks;

    printf("Pre sortiranja:\n");
    Ispisi(aiNiz, 5);

    Sortiraj(aiNiz, 5);

    printf("Posle sortiranja:\n");
    Ispisi(aiNiz, 5);

    return 0;
}

void Ispisi(int aiNiz[], int iBrojElemenata)
{
    int iIndex;

    for(iIndex=0; iIndex<=4; iIndex++)
    {
        printf("%d. element %d\n", iIndex, aiNiz[iIndex]);
    }
}

void Sortiraj(int aiNiz[], int iBrojElemenata)
{
    int iIndex;
    bool Sortirano;

    do
    {
        Sortirano = false;
        for(iIndex=0; iIndex<=3; iIndex++)
        {
            if (aiNiz[iIndex] > aiNiz[iIndex + 1])
            {
                int Privremena;
                Privremena = aiNiz[iIndex];
                aiNiz[iIndex] = aiNiz[iIndex + 1];
                aiNiz[iIndex + 1] = Privremena;
                Sortirano = true;
            }
        }
    } while (Sortirano == true);
    
}