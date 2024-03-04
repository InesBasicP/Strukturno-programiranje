#include<stdio.h>
int main ()
{

    int a, b, c, i, d;

    printf("Unesite prvi clan niza: ");
    scanf("%d" , &a);

    printf("Unesite drugi clan niza: ");
    scanf("%d" , &b);

    printf("Unesite redni broj trazenog clana niza: ");
    scanf("%d" , &c);

    for (i = 3; i<=c; i++)
    {
        d = a+b;
        a = b;
        b = d;
    }

    printf("%d. clan Fibonacijevog niza je broj %d.", c, d);

    return 0;
}