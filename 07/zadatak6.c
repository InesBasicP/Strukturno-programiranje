#include<stdio.h>

int main()
{   
    int a, b, c;
    void ispisVrednosti(int,int,int);

    printf("Unesite 1. broj: ");
    scanf("%d", &a);

    printf("Unesite 2. broj: ");
    scanf("%d", &b);

    printf("Unesite 3. broj: ");
    scanf("%d", &c);

    ispisVrednosti(a,b,c);

    return 0;
}

void ispisVrednosti (int a, int b, int c)
{
    if(a < b && a < c)
    {
        printf("Najmanja vrednost je %d\n", a);
    }
    if(b < a && b < c)
    {
        printf("Najmanja vrednost je %d\n", b);
    }
    if(c < b && c < a)
    {
        printf("Najmanja vrednost je %d\n", c);
    }

    if(a > b && a > c)
    {
        printf("Najveca vrednost je %d\n", a);
    }
    if(b > a && b > c)
    {
        printf("Najveca vrednost je %d\n", b);
    }
    if(c > b && c > a)
    {
        printf("Najveca vrednost je %d\n", c);
    }
}