#include<stdio.h>
int main ()
{

    int i, iZbir1 = 0, iZbir2 = 0;

    for(i=100; i<=154; i++)
    {
        if(i%2 != 0)
        {
            iZbir1 = iZbir1+i;
        }

        if(i%2 != 0 && i%7 == 0)
        {
            iZbir2 = iZbir2+i;
        }
    }

    printf("Zbir neparnih brojeva je: %d\n", iZbir1);
    printf("Zbir neparnih brojeva koji su deljivi sa 7 je: %d", iZbir2);

    return 0;
}