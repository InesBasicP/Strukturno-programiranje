#include<stdio.h>

    typedef struct SStedisa
    {
        int iTD;
        int iGodinaRodjenja;
        float fStednja;
    } STEDISA;

int main() 
{

    STEDISA uStedisa1, uStedisa2;

    printf("Unos podataka za prvog stedisu:\n");

    printf("Unesite ID: ");
    scanf("%d", &uStedisa1.iTD);

    printf("Unesite godinu rodjenja: ");
    scanf("%d", &uStedisa1.iGodinaRodjenja);

    printf("Unesite iznos stednje: ");
    scanf("%f", &uStedisa1.fStednja);

    printf("Unos podataka za drugog stedisu:\n");

    printf("Unesite ID: ");
    scanf("%d", &uStedisa2.iTD);

    printf("Unesite godinu rodjenja: ");
    scanf("%d", &uStedisa2.iGodinaRodjenja);

    printf("Unesite iznos stednje: ");
    scanf("%f", &uStedisa2.fStednja);

    printf("Ispis podataka:\n");

    printf("Stedisa1: ID %d, godina rodjenja %d, iznos stednje %.2f\n", uStedisa1.iTD, uStedisa1.iGodinaRodjenja, uStedisa1.fStednja);
    printf("Stedisa2: ID %d, godina rodjenja %d, iznos stednje %.2f", uStedisa2.iTD, uStedisa2.iGodinaRodjenja, uStedisa2.fStednja);

    return 0;
}