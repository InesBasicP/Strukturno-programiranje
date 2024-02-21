#include<stdio.h>

int main ()
{

    int a , b;

    printf("Unesite prvi broj: ");
    scanf("%d" , &a); 

    printf("Unesite drugi broj: ");
    scanf("%d" , &b); 

    if (a > b)
    {
        printf("%d > %d", a, b);
    }

    else if (a < b)
    {
        printf("%d < %d", a, b);
    }
    
    else
    {
        printf("%d = %d", a, b);
    }

    return 0;
}