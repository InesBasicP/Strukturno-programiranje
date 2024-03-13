#include<stdio.h>
int main()
{

    int i;
    int iBrojac = 0;

    for(i=200; i<=2500; i++)
    {
        if(i % 5 == 0 && i % 7 == 0)
        {
            if (iBrojac >= 10)
            {
                break;
            }

            iBrojac++;
            printf("%d. broj je %d\n", iBrojac, i);
        }
    }
    return 0;
}