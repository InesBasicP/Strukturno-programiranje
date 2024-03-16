#include<stdio.h>
int main ()
{
    int aiNiz[10] = {12, 3, 8, 90,150, 6, 37, 23, 88, 47};
    int iIndex;
    int iIndexMax = 0;

    for(iIndex=1; iIndex<=9; iIndex++)
    {
        if(aiNiz[iIndex] > aiNiz[iIndexMax])
        {
            iIndexMax = iIndex;
        }
    }

    printf("Vrednost element sa najvecom vrednoscu: %d\n", aiNiz[iIndexMax]);
    printf("Indeks elementa sa najveom vrednoscu: %d", iIndexMax);

    return 0;
}