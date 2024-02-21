#include<stdio.h>

int main ()
{

    int a;

    printf("Unesite jedan broj u opsegu [0-9999]: ");
    scanf("%d" , &a);

    if (a < 10)
    {
        printf("Broj je jednocifren.");
    }

    else if (a >= 10 && a < 100)
    {
        printf("Broj je dvocifren.");
    }

    else if (a >= 100 && a < 1000)
    {
        printf("Broj je trocifren.");
    }
    else if (a >= 1000 && a <= 9999)
    {
        printf("Broj je cetvorociren.");
    }
    else
    {
        printf("Uneti broj nije iz dozvoljenog opsega.");
    }

    return 0;
}