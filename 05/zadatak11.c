#include<stdio.h>
int main ()
{

    int iUnos, i, iZbir=0;

    printf("Unesite ceo broj: ");
    scanf("%d", &iUnos);

    for(i=iUnos; i>=1; i--)
    {
        if(iUnos%i == 0 && i != iUnos)
        {
            iZbir = iZbir+i;
        }
    }

    if(iZbir == iUnos)
    {
        printf("Broj %d je savrsen broj.", iUnos);
    }

    else
    {
        printf("Broj %d nije savrsen broj.", iUnos);
    }




    return 0;
}