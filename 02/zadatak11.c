#include<stdio.h>
#include<string.h>

int main ()
{
    char c[2];
    int a, b;

    printf("Unesite +, -, * ili /: ");
    scanf("%c" , &c);

    printf("Unesite vrednost prvog operanda: ");
    scanf("%d" , &a);

    printf("Unesite vrednost drugog operanda: ");
    scanf("%d" ,&b);

    if(strcmp(c, "+") == 0)
    {
        printf("%d + %d = %d" , a, b, a+b);
    }

    else if(strcmp(c, "-") == 0)
    {
        printf("%d - %d = %d" , a, b, a-b);
    }

    else if(strcmp(c, "*") == 0)
    {
        printf("%d * %d = %d" , a, b, a*b);
    }

    else if(strcmp(c, "/") == 0)
    {
        printf("%d / %d = %.2f" , a, b, (float)a/b);
    }

    return 0;
}