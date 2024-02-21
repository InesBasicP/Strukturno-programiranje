#include<stdio.h>

int main()
{

    int a;

    printf("Unesite broj: ");
    scanf("%d" , &a); 

    if (a % 2 == 0)
    {
        printf("Uneti broj je deljiv sa 2.");
    }

    if (a % 3 == 0)
    {
        printf("\nUneti broj je deljiv sa 3.");
    }

    if (a % 5 == 0)
    {
        printf("\nUneti broj je deljiv sa 5.");
    }

    if (a % 7 == 0)
    {
        printf("\nUneti broj je deljiv sa 7.");
    }

    if (a % 9 == 0)
    {
        printf("\nUneti broj je deljiv sa 9.");
    }
    return 0;
}