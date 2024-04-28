#include<stdio.h>

int main ()
{
    char c;
    int a, b;

    printf("Unesite +, -, * ili /: ");
    scanf("%c" , &c);

    printf("Unesite vrednost prvog operanda: ");
    scanf("%d" , &a);

    printf("Unesite vrednost drugog operanda: ");
    scanf("%d" ,&b);

    switch (c)
    {
        case '+':
            printf("%d+%d=%d", a, b, a+b);
            break;
        case '-':
            printf("%d-%d=%d", a, b, a-b);
            break;
        case '*':
            printf("%d*%d=%d", a, b, a*b);
            break;
        case '/':
            printf("%d/%d=%.2f", a, b, (float)a/b);
            break;
    }

    return 0;
}