#include<stdio.h>
int main ()
{

    int a, b, c, d, e, f, g, h, i, j, BROJ;

    printf("Unesite 1. broj: ");
    scanf("%d" , &a);

    printf("Unesite 2. broj: ");
    scanf("%d" , &b);

    printf("Unesite 3. broj: ");
    scanf("%d" , &c);

    printf("Unesite 4. broj: ");
    scanf("%d" , &d);

    printf("Unesite 5. broj: ");
    scanf("%d" , &e);

    printf("Unesite 6. broj: ");
    scanf("%d" , &f);

    printf("Unesite 7. broj: ");
    scanf("%d" , &g);

    printf("Unesite 8. broj: ");
    scanf("%d" , &h);

    printf("Unesite 9. broj: ");
    scanf("%d" , &i);

    printf("Unesite 10. broj: ");
    scanf("%d" , &j);

    BROJ = (1*a + 2*b + 3*c + 4*d + 5*e + 6*f + 7*g + 8*h + 9*i)%11;

    if ( BROJ == j )
    {
        printf("Uneti broj je ispravan ISBN broj.");
    }
    else
    {
        printf("Uneti broj nije ispravan ISBN broj.");
    }

    return 0;
}