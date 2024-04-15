#include<stdio.h>

int main()
{
    int a, b, c;
    int iRezultat;
    int iZbir(int, int, int);

    printf("Unesite 1. broj: ");
    scanf("%d", &a);

    printf("Unesite 2. broj: ");
    scanf("%d", &b);

    printf("Unesite 3. broj: ");
    scanf("%d", &c);

    iRezultat = iZbir(a,b,c);

    printf("Zbir unetih brojeva je %d", iRezultat);

    return 0;
}

int iZbir (int a, int b, int c)
{
    int iRezultat;
    iRezultat = a+b+c;

    return(iRezultat);
}