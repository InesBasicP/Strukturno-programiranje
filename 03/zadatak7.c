#include<stdio.h>

int main ()
{

    int a;

    for (a=10; a<=217; a++)
    {
        if (a%2==0)
        {
            if (a%3==0 && a%5==0)
            {
                printf("%d\n" , a);
            }
        }
    }



    return 0;
}