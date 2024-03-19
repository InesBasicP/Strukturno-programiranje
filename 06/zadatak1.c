#include<stdio.h>
int main ()
{

    int iPrviBroj, iDrugiBroj, iPrivremena;
    int *piPrviBroj = &iPrviBroj;
    int *piDrugiBroj = &iDrugiBroj;
    int *piPrivremena = &iPrivremena;

    printf("Unesite prvi broj: ");
    scanf("%d", piPrviBroj);

    printf("Unesite drugi broj: ");
    scanf("%d", piDrugiBroj);

    *piPrivremena = *piPrviBroj;
    *piPrviBroj = *piDrugiBroj;
    *piDrugiBroj = *piPrivremena;

    printf("Posle zamene vrednosti\n");
    printf("Prvi broj je: %d\n", *piPrviBroj);
    printf("Drugi broj je: %d", *piDrugiBroj);

    return 0;
}