#include <stdio.h>
#include <stdbool.h>

int main ()
{

    int aiNiz[5] = {10,14,17,18,2};
    bool bRazliciti (int *, int);

    if(bRazliciti(aiNiz, 5) == true)
    {
        printf("Svi elementi su rastuci");
    }
    else
    {
        printf("Svi elementi nisu rastuci");
    }

    return 0;
}

    bool bRazliciti(int aiNiz[], int iBrojElemenata)
    {
        int iIndeks;
        bool Rastuci;

        for(iIndeks=0; iIndeks<=iBrojElemenata; iIndeks++)
        {
            if(aiNiz[iIndeks] < aiNiz[iIndeks + 1])
            {
                return (Rastuci == true);   
            }

            else
            {
                return (Rastuci == false);
            }
        }
    }