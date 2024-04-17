#include <stdio.h>
int main()
{

    int aiNiz[10] = {12,3,8,90,150,6,37,23,88,47};
    int *piBroj = NULL;
    piBroj = &aiNiz[0];
    int iIndex, iIndexMax = 0;

    for(iIndex=1; iIndex<=9; iIndex++)
    {
        if(*(piBroj + iIndex) > *(piBroj + iIndexMax))
        {
            iIndexMax = iIndex;
            *(piBroj + iIndexMax) = *(piBroj + iIndex);
        }
    }

    printf("Vrednost element sa najvecom vrednoscu: %d\n", *(piBroj + iIndexMax));
    printf("Indeks elementa sa najveom vrednoscu: %d", iIndexMax);

    return 0;
}
