#include<stdio.h>
#include<stdbool.h>

int main ()
{
    int aiNiz[10] = {12, 8, 3, 90, 150, 6, 37, 23, 88, 47};
    int iIndex;
    bool bIsti;

    for(iIndex=0; iIndex<=9; iIndex++)
    {
        if(aiNiz[iIndex] == aiNiz[iIndex+1])
        {
            bIsti = true;
            break;
        }

        else
        {
            bIsti = false;
        }
    }

    if(bIsti == true)
    {
        printf("Svi susedni elementi niza nisu razliciti.");
    }
    else
    {
        printf("Svi susedni elementi niza su razliciti.");
    }


    return 0;
}