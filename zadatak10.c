#include<stdio.h>
#include<math.h>

int main()
{
    int a, h, m, s;
    printf("Unesite broj sekundi: ");
    scanf("%d", &a);

    h = a/3600;
    m = (a - (h*3600)) / 60;
    s = a - (m*60) - (h*3600);

    printf("%d h %d min %d sec", h, m, s);
    return 0;

}