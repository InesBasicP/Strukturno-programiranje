#include <stdio.h>
#include<stdbool.h>

int main()
{

    int aiNiz[10] = {12,3,8,90,150,6,37,23,88,47};
    int iIndeks, iIndeks2;
    bool Indikator = false;

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        for(iIndeks2=iIndeks+1; iIndeks2<=9; iIndeks2++)
        {
            if(aiNiz[iIndeks] == aiNiz[iIndeks2])
            {
                Indikator = true;
                break;
            }
        }
    }

    if(Indikator == true)
    {
        printf("Svi elementi niza nisu razliciti.");
    }
    else 
    {
        printf("Svi elementi niza su razliciti.");
    }

    return 0;
}