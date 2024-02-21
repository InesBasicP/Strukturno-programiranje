#include <stdio.h>

int main ()
{

    int a, h, m, s;

    printf("Unesite broj sati ");
    scanf("%d" , &h);

    printf("Unesite broj minuta ");
    scanf("%d", &m);

    printf("Unesite broj sekundi ");
    scanf("%d" , &s);

    a = h*3600 + m*60 + s;

    printf("%d sec" , a);

    return 0;



}