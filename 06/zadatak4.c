#include<stdio.h>
int main()
{

    int iGodina;
    int *piGodina = &iGodina;

    printf("Unesite godinu: ");
    scanf("%d", piGodina);

    if((*piGodina % 4 == 0 && *piGodina % 100 != 0) || (*piGodina % 4 == 0 && *piGodina % 100 == 0 && *piGodina % 400 == 0))
    {
        printf("%d je prestupna godina.", *piGodina);
    }

    else
    {
        printf("%d nije prestupna godina.", *piGodina);
    }


    return 0;
}