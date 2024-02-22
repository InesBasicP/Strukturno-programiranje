#include<stdio.h>

int main ()
{

    int iGodina;

    printf("Unesite godinu: ");
    scanf("%d" , &iGodina);

    if ((iGodina % 4 == 0 && iGodina % 100 == 0 && iGodina % 400 == 0) || (iGodina % 4 == 0 && iGodina % 100 != 0))
    {
        printf("%d je prestupna godina." , iGodina);
    }

    else
    {
        printf("%d nije prestupna godina." , iGodina);
    }

    return 0;

}