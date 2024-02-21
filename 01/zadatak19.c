#include<stdio.h>
#include<math.h>

int main()
{
    int a1, b1, r1, a2, b2, r2, a1_new, a2_new, r1_new, r2_new, a, r, x, y;

    printf("Prva jednacina: \n");
    printf("------------------------------\n");

    printf("Unesite a1: ");
    scanf("%d", &a1);

    printf("Unesite b1: ");
    scanf("%d", &b1);

    printf("Unesite r1: ");
    scanf("%d", &r1);


    printf("\nDruga jednacina: \n");
    printf("------------------------------\n");

    printf("Unesite a2: ");
    scanf("%d", &a2);

    printf("Unesite b2: ");
    scanf("%d", &b2);

    printf("Unesite r2: ");
    scanf("%d", &r2);

    if ((b1 > 0 && b2 < 0) || (b1 < 0 && b2 > 0))
    {
        if (b1 < 0)
        {
            a1_new = a1*b2;
            r1_new = r1*b2;

            a2_new = -(a2*b1);
            r2_new = -(r2*b1);
            
        }
        else if (b2 < 0)
        {
            a1_new = -(a1*b2);
            r1_new = -(r1*b2);

            a2_new = a2*b1;
            r2_new = r2*b1;
        }
    }
    else if ((b1 < 0 && b2 < 0) || (b1 > 0 && b2 > 0))
    {
        a1_new = a1*b2;
        r1_new = r1*b2;

        a2_new = -(a2*b1);
        r2_new = -(r2*b1);
    };

    a = a1_new + a2_new;
    r = r1_new + r2_new;

    x = r/a;
    y = (r1-a1*x)/b1;
    
    printf("\nResenja\n");
    printf("------------------------------\n");
    printf("Vrednost promenljive x je: %.2f\n", (float)x);
    printf("Vrednost promenljive y je: %.2f\n", (float)y);

    return 0;
}