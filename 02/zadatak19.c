#include<stdio.h>

int main ()
{

    int izbor, a, b, c, d, a2, b2, c2, d2, temp;

    printf("Unesite izbor: 1 - sifrovanje 2 - desifrovanje ");
    scanf("%d" , &izbor);

    printf("Unesite 1. broj:" );
    scanf("%d", &a);

    printf("Unesite 2. broj:" );
    scanf("%d", &b);

    printf("Unesite 3. broj:" );
    scanf("%d", &c);

    printf("Unesite 4. broj:" );
    scanf("%d", &d);

    if (izbor == 1)
    {
        a2 = (a+7)%10;
        b2 = (b+7)%10;
        c2 = (c+7)%10;
        d2 = (d+7)%10;

        temp = a2;
        a2 = c2;
        c2 = temp;

        temp = b2;
        b2 = d2;
        d2 = temp;

        printf("Sifrovani broj je: %d%d%d%d", a2, b2, c2, d2); 
    }

    else
    {
        temp = b;
        b = d;
        d = temp;

        temp = a;
        a = c;
        c = temp;

        a2 = (a-7+10)%10;
        b2 = (b-7+10)%10;
        c2 = (c-7+10)%10;
        d2 = (d-7+10)%10;

        printf("Desifrovani broj je: %d%d%d%d", a2, b2, c2, d2);
    }
    
    return 0;
}