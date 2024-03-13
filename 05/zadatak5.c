#include<stdio.h>
#include<stdbool.h>

int main()
{

    int iUnos, i;
    bool Indikator = false;


    for(i=1; ;i++)
    {
        printf("Unesite broj: ");
        scanf("%d", &iUnos);

        if(iUnos>500 && iUnos%5 == 0)
        {
            Indikator = true;
        }

        if(iUnos == 0)
        {
            break;
        }
    }

    if(Indikator == true)
    {
        printf("Unet je broj veci od 500 koji je deljiv brojem 5.");
    }
    
    else
    {
        printf("Nije unet broj veci od 500 koji je deljiv brojem 5.");
    }

    

    return 0;
}