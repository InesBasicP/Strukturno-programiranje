#include<stdio.h>
int main ()
{

    int aiBrojevi[10] = {5,8,1,3,9,4,6,7,15,2};
    int iIndeks;
    int *piBrojevi = &aiBrojevi[0];

    for(iIndeks=0; iIndeks<=9; iIndeks++)
    {
        if(*(piBrojevi + iIndeks) % 2 != 0)
        {
            *(piBrojevi + iIndeks) = 555;
        }

        printf("Indeks: %d.  Vrednost:%d\n", iIndeks, *(piBrojevi + iIndeks));
    }


    return 0;
}