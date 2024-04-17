#include<stdio.h>
int main ()
{

    int aiNiz1[10] = {12, 3, 8, 90, 150, 18, 75, 11, 9, 28};
    int aiNiz2[10] = {62, 6, 37, 23, 88, 47, 43, 8, 59, 81};
    int iZbir;
    int *piBroj1 = NULL;
    int *piBroj2 = NULL;
    piBroj1 = &aiNiz1[0];
    piBroj2 = &aiNiz2[0];

    iZbir = *piBroj1 * *(piBroj2 + 9) + *(piBroj1 + 1) * *(piBroj2 + 8) + *(piBroj1 + 2) * *(piBroj2 + 7) + *(piBroj1 + 3) * *(piBroj2 + 6) + *(piBroj1 + 4) * *(piBroj2 + 5);

    printf("Zbir: %d", iZbir);


    return 0;
}