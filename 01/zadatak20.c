#include<stdio.h>
#include<math.h>

int main()
{
    int a1, b1, c1, r1, a2, b2, c2, r2, a3, b3, c3, r3, D, Dx, Dy, Dz, x, y, z;

    printf("Prva jednacina: \n");
    printf("------------------------------\n");

    printf("Unesite a1: ");
    scanf("%d", &a1);

    printf("Unesite b1: ");
    scanf("%d", &b1);

    printf("Unesite c1: ");
    scanf("%d", &c1);

    printf("Unesite r1: ");
    scanf("%d", &r1);


    printf("\nDruga jednacina: \n");
    printf("------------------------------\n");

    printf("Unesite a2: ");
    scanf("%d", &a2);

    printf("Unesite b2: ");
    scanf("%d", &b2);

    printf("Unesite c2: ");
    scanf("%d", &c2);

    printf("Unesite r2: ");
    scanf("%d", &r2);


    printf("\nTreca jednacina: \n");
    printf("------------------------------\n");

    printf("Unesite a3: ");
    scanf("%d", &a3);

    printf("Unesite b3: ");
    scanf("%d", &b3);

    printf("Unesite c3: ");
    scanf("%d", &c3);

    printf("Unesite r3: ");
    scanf("%d", &r3);

    D = a1*b2*c3+b1*c2*a3+c1*a2*b3-a3*b2*c1-b3*c2*a1-c3*a2*b1;
    printf("\nDeterminanta: %d" , D);

    Dx = r1*b2*c3+b1*c2*r3+c1*r2*b3-r3*b2*c1-b3*c2*r1-c3*r2*b1;
    printf("\nDeterminantaX: %d" , Dx);

    Dy = a1*r2*c3+r1*c2*a3+c1*a2*r3-a3*r2*c1-r3*c2*a1-c3*a2*r1;
    printf("\nDeterminantaY: %d" , Dy);

    Dz = a1*b2*r3+b1*r2*a3+r1*a2*b3-a3*b2*r1-b3*r2*a1-r3*a2*b1;
    printf("\nDeterminantaZ: %d\n" , Dz);

    x = Dx/D;
    y = Dy/D;
    z = Dz/D;

    printf("\nResenja\n");
    printf("------------------------------\n");
    printf("Vrednost promenljive x je: %.2f\n", (float)x);
    printf("Vrednost promenljive y je: %.2f\n", (float)y);
    printf("Vrednost promenljive z je: %.2f\n", (float)z);

    return 0;
}