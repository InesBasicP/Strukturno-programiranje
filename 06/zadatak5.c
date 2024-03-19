#include<stdio.h>
int main ()
{

    int iIndeks;
    int *piIndeks = &iIndeks;

    for(*piIndeks = 208; *piIndeks <= 215; (*piIndeks)++)
    {
        if(*piIndeks % 5 != 0)
        {
            printf("%d\n", *piIndeks);
        }
    }

    return 0;
}