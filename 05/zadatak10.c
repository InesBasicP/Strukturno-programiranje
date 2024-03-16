#include<stdio.h>
int main ()
{

    int i, iUnos;
    int iProizvod = 1;

    printf("Unesite broj: ");
    scanf("%d", &iUnos);

    for(i=iUnos; i>1; i--)
    {
        iProizvod = iProizvod * i;
    }

    printf("Faktorijel broj %d je %d.", iUnos , iProizvod);

    return 0;
}