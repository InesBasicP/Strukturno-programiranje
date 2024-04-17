#include<stdio.h>
#include<stdbool.h>

int main()
{
    
    int aiNiz[5] = {10,14,17,18,29};
    bool Rastuci(int*, int);

    if(Rastuci(aiNiz,5) == true)
    {
        printf("Elementi su rastuci.");
    }
    else
    {
        printf("Elementi nisu rastuci.");
    }

    return 0;
}

bool Rastuci(int aiNiz[], int iBrojElemenata)
{
    int i;
    bool bRaste = true;

    for(i=0; i<=4; i++)
    {
        if(aiNiz[i] > aiNiz[i + 1])
        {
            bRaste == false;
            break;
        }
        
    }
    return (bRaste);
}