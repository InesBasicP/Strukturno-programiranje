#include<stdio.h>
int main ()
{

    int iRedniBroj;
    int iUnos;
    int iNeparni = 0;

    for(iRedniBroj=1;;iRedniBroj++)
    {
        printf("Unesite %d. broj: ", iRedniBroj);
        scanf("%d", &iUnos);

        if(iUnos == 0)
        {
            break;
        }

        if(iUnos % 2 != 0)
        {
            iNeparni++;
        }
    }

    printf("Ukupno neparnih brojeva: %d", iNeparni);

    return 0;
}