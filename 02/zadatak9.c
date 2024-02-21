#include<stdio.h>

int main ()
{

    int a , b, c;

    printf("Unesite vrednost promenljive a: ");
    scanf("%d" , &a);

    printf("Unesite vrednost promenljive b: ");
    scanf("%d" , &b);

    printf("Unesite vrednost promenljive c: ");
    scanf("%d" , &c);

    if (a > b && b > c)
    {
        a = a*2;
        b = b*2;
        c = c*2;
        printf(" a = %.2f, b = %.2f, c = %.2f", (float)a, (float)b, (float)c);
    }

    else 
    {
        a = a/2;
        b = b/2;
        c = c/2;
        printf(" a = %.2f, b = %.2f, c = %.2f", (float)a, (float)b, (float)c);
    }

    return 0;
}