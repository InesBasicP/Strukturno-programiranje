#include <stdio.h>
int main()
{

    int i;
    int iBrojac = 0;

    for(i=1; i<=1000; i++)
    {
        if(i % 3 == 0 && i % 7 == 0)
        {
            iBrojac++;
        }
    }
    printf("Ukupno: %d brojeva deljivih sa 3 i 7.", iBrojac);

    return 0;
}