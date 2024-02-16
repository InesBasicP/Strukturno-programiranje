#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, p;

    printf("Unesite broj ");
    scanf("%d" , &a);

    b = floor(a/100);
    c = a%100;
    d = floor(c/10);
    p = c%10;

    printf("%d x 100\n", b);
    printf("%d x 10\n", d);
    printf("%d x 1", p);

    return 0;
    
}