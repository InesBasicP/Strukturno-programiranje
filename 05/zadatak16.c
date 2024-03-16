#include<stdio.h>
int main ()
{
    int aiNiz[10] = {12, 3, 8, 90,150, 6, 37, 23, 88, 47};
    int iIndex;
    int iIndexMinimuma = 0;

    for(iIndex=1; iIndex<=9; iIndex++)
    {
        if(aiNiz[iIndex] < aiNiz[iIndexMinimuma])
        {
            iIndexMinimuma = iIndex;
        }
    }

    printf("Vrednost element sa najmanjom vrednoscu: %d\n", aiNiz[iIndexMinimuma]);
    printf("Indeks elementa sa najmanjom vrednoscu: %d", iIndexMinimuma);



    return 0;
}