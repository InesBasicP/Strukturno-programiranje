#include<stdio.h>
#include<stdbool.h>

int main()
{

    int aiNiz[10] = {12,3,8,90,150,6,37,23,88,47};
    int iIndex, iPrivremena;
    bool bPromenaMesta;

    do
    {
        bPromenaMesta = false;
        
        for(iIndex=0; iIndex<=8; iIndex++)
        {
            if(aiNiz[iIndex] > aiNiz[iIndex + 1])
            {
                iPrivremena = aiNiz[iIndex];
                aiNiz[iIndex] = aiNiz[iIndex + 1];
                aiNiz[iIndex + 1] = iPrivremena;
                bPromenaMesta = true;
            }
        }

    } while (bPromenaMesta == true);

    printf("Sortirani niz");

    for(iIndex=0; iIndex<=9; iIndex++)
    {
        printf("aiNiz[%d] = %d\n", iIndex, aiNiz[iIndex]);
    }

    return 0;
}