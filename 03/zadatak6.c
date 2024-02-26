#include<stdio.h>

int main ()
{

    int a;

    for (a=208; a<=215; a++)
    {
        if(a%5!=0)
        {
            printf("%d\n" , a);
        }
    }

    return 0;
}