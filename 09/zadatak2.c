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
    int iIndeksMin = 0;

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
        if(uStedise[iIndeks].fStednja < uStedise[iIndeksMin].fStednja)
        {
            iIndeksMin = iIndeks;
        }
    }

    printf("Ispis podataka o stedisi sa najmanjom stednjom:\n");

    printf("ID: %d, godina rodjenja: %d, iznos stednje: %.2f", uStedise[iIndeksMin].iTD, uStedise[iIndeksMin].iGodinaRodjenja, uStedise[iIndeksMin].fStednja);


    return 0;
}