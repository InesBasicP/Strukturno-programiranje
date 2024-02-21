#include<stdio.h>

int main ()
{

    int iProdataKolicina , iCena, iProizvedenaKolicina , iTroskovi;
    float fDobit; 

    printf("Unesite prodatu kolicinu proizvoda: ");
    scanf("%d" , &iProdataKolicina);

    printf("Unesite jedinicnu cenu: ");
    scanf("%d" , &iCena);

    printf("Unesite proizvedenu kolicinu proizvoda: ");
    scanf("%d" , &iProizvedenaKolicina);

    printf("Unesite troskove po jedinici proizvoda: ");
    scanf("%d" , &iTroskovi);

    printf("----------------------------------\n");

    fDobit = (float)(iProdataKolicina*iCena)-(iProizvedenaKolicina*iTroskovi);

    printf("Dobit iznosi %.2f din." , fDobit);

    return 0;
}