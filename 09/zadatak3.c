#include<stdio.h>

    typedef struct SStedisa
    {
        int iTD;
        int iGodinaRodjenja;
        float fStednja;
    } STEDISA;

int main ()
{
    STEDISA uStedise[5];
    int iIndeks;

    for (iIndeks=0; iIndeks<=4; iIndeks++)
    {
        printf("Upis podataka za %d. stedisu:\n", iIndeks+1);

        printf("Unesite ID:");
        scanf("%d", &uStedise[iIndeks].iTD);

        printf("Unesite godinu rodjenja:");
        scanf("%d", &uStedise[iIndeks].iGodinaRodjenja);

        printf("Unesite iznos stednje:");
        scanf("%f", &uStedise[iIndeks].fStednja);
    }

    for(iIndeks=0; iIndeks<=4; iIndeks++)
    {
        printf("%d. --> %d --> %d --> %.2f\n", iIndeks+1, uStedise[iIndeks].iTD, uStedise[iIndeks].iGodinaRodjenja, uStedise[iIndeks].fStednja);
    }

    return 0;
}