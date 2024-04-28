#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, p;

    printf("Unesite broj ");
    scanf("%d" , &a);

    b = a/100;
    c = (a - (b*100)) / 10;
    d = a % 10;

    printf("%d x 100\n", b);
    printf("%d x 10\n", c);
    printf("%d x 1", d);

    return 0;
    
}