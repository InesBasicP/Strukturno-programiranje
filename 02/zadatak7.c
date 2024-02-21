#include<stdio.h>

int main ()
{

    int a;

    printf("Unesite broj: ");
    scanf("%d" , &a); 

    if ((a < 500) || (a > 1000 && a <= 2000) || (a % 2 == 0 && a % 3 == 0))
    {
        printf("Broj je odgovarajuci.");
    }

    else
    {
        printf("Broj nije odgovarajuci.");
    }

    return 0;
}