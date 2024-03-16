#include<stdio.h>
#include<stdbool.h>
int main ()
{

    int i, iUnos;
    bool indikator_prost;

    printf("Unesite jedan celi broj: ");
    scanf("%d", &iUnos); 

    if (iUnos <= 1)
    {
        printf("Broj %d nije prost broj.", iUnos);
    }
    else
    {
        indikator_prost = true; // indikator da je broj prost

        for(i=2; i<iUnos; i++)
        {
            if (iUnos % i == 0)
            {
                indikator_prost = false; // indikator da broj nije prost
                break;
            }
        }

        if (indikator_prost == true) // finalni rezultat nakon provere - jel prost ili nije?
        {
            printf("Broj %d prost broj.", iUnos);
        }
        else
        {
            printf("Broj %d nije prost broj.", iUnos);
        }

    }

    return 0;
}