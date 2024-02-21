#include<stdio.h>

int main ()
{

    int a;

    printf("Unesite broj: ");
    scanf("%d" , &a); 

    if (a < 100 || a > 600)
    {
        printf("Uslov je zadovoljen.");
    }

    else
    {
        printf("Uslov nije zadovoljen.");
    }


    return 0;
}