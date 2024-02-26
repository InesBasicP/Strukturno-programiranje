#include<stdio.h>

int main ()
{

    int a = 10;

    for (a=10; a<=25; a++)
    {
        if (a%2==0)
        {
            printf("%d\n" , a);
        }
    }

    return 0;
}