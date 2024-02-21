#include<stdio.h>

int main()
{
    int a;

    printf("Unesite broj: ");
    scanf("%d" , &a);

    if (a % 2 == 0)
    {
        printf("Broj koji ste uneli je paran.");
    }
    else
    {
        printf("Broj koji ste uneli je neparan.");
    }

    return 0;
}