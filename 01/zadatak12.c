#include <stdio.h>
int main ()
{

    int iIznosDinara;
    float fKurs; 

    printf("Unesite iznos dinara: ");
    scanf("%d" , &iIznosDinara);

    printf("Unesite iznos dinara potreban za 1 evro: ");
    scanf("%f" , &fKurs);

    printf("%.2f RSD = %.2f EUR" , (float)iIznosDinara , iIznosDinara/fKurs);






    return 0; 
}