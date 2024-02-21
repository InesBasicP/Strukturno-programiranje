#include<stdio.h>

int main ()
{

    int a;

    printf("Unesite broj: ");
    scanf("%d" , &a); 

    if (a >= 10 && a <=100)
    {
        printf("Broj je u opsegu.");
    }

    else
    {
        printf("Broj nije u opsegu.");
    }

    int b;

    printf("\nUnesite broj: ");
    scanf("%d" , &b); 

    if (b > 10 && b < 100)
    {
        printf("Broj je u opsegu.");
    }

    else
    {
        printf("Broj nije u opsegu.");
    }


    return 0;
}