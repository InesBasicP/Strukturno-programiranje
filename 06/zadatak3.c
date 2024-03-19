#include<stdio.h>
int main ()
{

    int iUnos;
    int *piUnos = &iUnos;

    printf("Unesite broj: ");
    scanf("%d", piUnos);

    if(*piUnos % 2 == 0)
    {
        printf("Broj koji ste uneli je paran.");
    }

    else
    {
        printf("Broj koji ste uneli je neparan.");
    }




    return 0;
}