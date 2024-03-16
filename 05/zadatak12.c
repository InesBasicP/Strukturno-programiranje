#include<stdio.h>
#include<stdbool.h>

int main ()
{

    bool ProstBroj;
    int i, j;
    int iProsti = 0;
    int iSuma = 0;


    for(i=10; i<= 50; i++)
    {
        ProstBroj = true;

        for(j=i; j>1; j--)
        {
            if(i%j == 0 && i != j)
            {
                ProstBroj = false;
                break;
            }
        }

        if(ProstBroj == true)
        {
            printf("Broj %d je prost broj.\n", i);
            iProsti = iProsti + 1;
            iSuma = iSuma + i;
        }
    }

    printf("Ukupan broj prostih brojeva je: %d.\n", iProsti);
    printf("Njihova suma je %d, a prosecna vrednost je %.2f.", iSuma, (float)iSuma/iProsti);





    return 0;
}