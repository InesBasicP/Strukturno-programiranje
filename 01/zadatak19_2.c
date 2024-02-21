#include<stdio.h>

int main ()
{

    int a1, b1, r1, a2, b2, r2, x, y, D , Dx, Dy;

    printf("Prva jednacina");
    printf("-----------\n");

    printf("Unesite a1: ");
    scanf("%d" , &a1);

    printf("Unesite b1: ");
    scanf("%d" , &b1);

    printf("Unesite r1: ");
    scanf("%d" , &r1);


    printf("\nDruga jednacina");
    printf("-----------\n");

    printf("Unesite a2: ");
    scanf("%d" , &a2);

    printf("Unesite b2: ");
    scanf("%d" , &b2);

    printf("Unesite r2: ");
    scanf("%d" , &r2);


    D = a1*b2 - a2*b1;
    Dx = r1*b2 - r2*b1;
    Dy = a1*r2 - a2*r1;

    x = Dx/D;
    y = Dy/D;

    printf("\nResenja");
    printf("-----------\n");
    printf("\nVrednost promenljive x je: %.2f", (float)x);
    printf("\nVrednost promenljive y je: %.2f", (float)y);

    return 0;
}
