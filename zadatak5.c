#include<stdio.h>
#include<stdbool.h>


int main()
{
    int a, b;

    printf("Unesite vrednost prve promenljive: ");
    scanf("%d", &a);

    printf("Unesite vrednost druge promenljive: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %f\n", a, b, (float)a*b);
    printf("%d / %d = %f\n", a, b, (float)a/b);
    printf("%d %% %d = %d", a, b, a%b);

    return 0;

}

