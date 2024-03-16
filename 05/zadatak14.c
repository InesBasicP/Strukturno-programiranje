#include<stdio.h>
int main ()
{

    int i, j, iBroj, iMin, iMax;

    for (i=1; i<=10; i++)
    {
        printf("Unesite %d. broj: ", i);
        scanf("%d", &iBroj);

        if (i == 1)
        {
            iMin = iBroj;
        }

        if (i == 2)
        {
            iMax = iBroj;

            if (iMin > iMax)
            {
                int temp = iMin;
                iMin = iMax;
                iMax = temp;
            }
        }

        if (iBroj < iMin)
        {
            iMin = iBroj;
        }

        if (iBroj > iMax)
        {
            iMax = iBroj;
        }
    }

    printf("Najmanji uneti broj je %d\n", iMin);
    printf("Najveci uneti broj je %d", iMax);

    return 0;
}