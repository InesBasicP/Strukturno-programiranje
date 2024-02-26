#include<stdio.h>

int main ()
{

    int a;

    for(a=117; a<=138; a++)
    {
        if(a%5==0)
        {
            printf("%d\n", a);
        }
    }
    
    return 0;
}