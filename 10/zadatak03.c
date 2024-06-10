#include<stdio.h>
#include<stdlib.h>

    typedef struct SStedisa
    {
        int iTD;
        int iGodinaRodjenja;
        float fStednja;
    } STEDISA;

int main() 
{

    STEDISA *uStedisa;
    void Ispisi(STEDISA*, int);
    int iIndeks;

    uStedisa = malloc(3*(sizeof(STEDISA)));

    for(iIndeks=0; iIndeks<=2; iIndeks++)
    {
        printf("Unos podataka za %d. stedisu:\n", iIndeks+1);

        printf("Unesite ID: ");
        scanf("%d", &uStedisa[iIndeks].iTD);

        printf("Unesite godinu rodjenja: ");
        scanf("%d", &uStedisa[iIndeks].iGodinaRodjenja);

        printf("Unesite iznos stednje: ");
        scanf("%f", &uStedisa[iIndeks].fStednja);
    }
    Ispisi(uStedisa,3);

    return 0;
}

void Ispisi(STEDISA* uNiz, int iBrojElemenata)
{
    int iIndeks;

    for(iIndeks=0; iIndeks<=2; iIndeks++)
    {
        printf("Redni broj: %d, ID: %d, godina rodjenja: %d, stednja: %.2f\n", iIndeks+1, uNiz[iIndeks].iTD,  uNiz[iIndeks].iGodinaRodjenja,  uNiz[iIndeks].fStednja);
    }
}