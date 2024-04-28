#include<stdio.h>
int main ()
{

    int iUnos;

    printf("Unesite jedan broj do 9999: ");
    scanf("%d", &iUnos);

    if(iUnos >= 0 && iUnos <= 9)
    {
        printf("Broj je jednocifren.");
    }
    else if(iUnos >= 10 && iUnos <= 99)
    {
        printf("Broj je dvocifren.");
    }
    else if(iUnos >= 100 && iUnos <= 999)
    {
        printf("Broj je trocifren.");
    }
    else if(iUnos >= 1000 && iUnos <= 9999)
    {
        printf("Broj je cetvorocifren.");
    }
    else
    {
        printf("Broj nije u opsegu.");
    }


    return 0;
}