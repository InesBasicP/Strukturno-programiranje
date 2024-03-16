#include<stdio.h>
int main ()
{
    int aiNiz[10] = {12, 3, 8, 90,150, 6, 37, 23, 88, 47};
    int i;
    int BrojElemenata = 10;
    int iZbir = 0;
    float fProsek;

    for(i=0; i<10; i++)
    {
        iZbir = iZbir + aiNiz[i];
    }

    fProsek = (float)iZbir / (float)BrojElemenata;
    
    printf("Zbir: %d\n" , iZbir);
    printf("Prosek %.2f", fProsek);

    return 0;
}