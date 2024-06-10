#include<stdio.h>
#include<stdbool.h>

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
    bool bZamena;
    int iIndeksMin = 0;
    int iTemp;
    float fUkupno = 0;
    float fProsecno = 0;

    for (iIndeks=0; iIndeks<=4; iIndeks++)
    {
        printf("Upis podataka za %d. stedisu:\n", iIndeks+1);

        printf("Unesite ID:");
        scanf("%d", &uStedise[iIndeks].iTD);

        printf("Unesite godinu rodjenja:");
        scanf("%d", &uStedise[iIndeks].iGodinaRodjenja);

        printf("Unesite iznos stednje:");
        scanf("%f", &uStedise[iIndeks].fStednja);

        fUkupno = fUkupno + uStedise[iIndeks].fStednja;
    }

    do
    {
        bZamena = false;

        for(iIndeks=0; iIndeks<=4; iIndeks++)
        {
            if(uStedise[iIndeks].fStednja < uStedise[iIndeks+1].fStednja)
            {
                iTemp = uStedise[iIndeks].fStednja;
                uStedise[iIndeks].fStednja = uStedise[iIndeks+1].fStednja;
                uStedise[iIndeks+1].fStednja = iTemp;

                bZamena = true;
            }
        }
    }while (bZamena == true);
    
    for(iIndeks=0; iIndeks<=4; iIndeks++)
    {
        printf("%d. --> %d --> %d --> %.2f\n", iIndeks+1, uStedise[iIndeks].iTD, uStedise[iIndeks].iGodinaRodjenja, uStedise[iIndeks].fStednja);
    }

    fProsecno = fUkupno / 5;

    printf("Ukupan iznos stednje je: %.2f\n", fUkupno);
    printf("Prosecan iznos stednje: %.2f", fProsecno);

    return 0;
}