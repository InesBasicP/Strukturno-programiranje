#include<stdio.h>
int main ()
{

    int aiMatrica[2][2];
    int aiAdjungovana[2][2];
    int iRed;
    int iKolona;
    int iVrednost;

    for(iRed=0; iRed<=1; iRed++)
    {
        for(iKolona=0; iKolona<=1; iKolona++)
        {
            printf("Red: %d Kolona: %d Vrednost: ", iRed, iKolona);
            scanf("%d" , &iVrednost);
            aiMatrica[iRed][iKolona] = iVrednost;
        }
    }

    printf("Adjungovana matrica\n");

    aiAdjungovana[0][0] = aiMatrica[1][1];
    aiAdjungovana[0][1] = -aiMatrica[0][1];
    aiAdjungovana[1][0] = -aiMatrica[1][0];
    aiAdjungovana[1][1] = aiMatrica[0][0];

    for(iRed=0; iRed<=1; iRed++)
    {
        for(iKolona=0; iKolona<=1; iKolona++)
        {
            printf("Red: %d Kolona: %d Vrednost: %d \n", iRed, iKolona, aiAdjungovana[iRed][iKolona]);
        }
    }
    return 0;
}