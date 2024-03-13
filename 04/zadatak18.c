#include<stdio.h>

int main ()
{

    int aiMatrica[3][2][2] = {
                                {{10,20}, {30,40}},
                                {{1,2}, {3,4}},
                                // {{11, 22}, {33, 44}}
                            };
    int iTabela, iRed, iKolona;

    // aiMatrica[3][0][0] = aiMatrica[1][0][0] + aiMatrica[2][0][0];
    // aiMatrica[3][0][1] = aiMatrica[1][0][1] + aiMatrica[2][0][1];
    // aiMatrica[3][1][0] = aiMatrica[1][1][0] + aiMatrica[2][1][0];
    // aiMatrica[3][1][1] = aiMatrica[1][1][1] + aiMatrica[2][1][1];
    
    for(iRed=0; iRed<=1; iRed++)
    {
        for (iKolona=0; iKolona<=1; iKolona++)
        {
            aiMatrica[2][iRed][iKolona] = aiMatrica[0][iRed][iKolona] + aiMatrica[1][iRed][iKolona];
            printf("Indeks reda: %d  Indeks kolone: %d  Vrednost: %d\n", iRed, iKolona, aiMatrica[0][iRed][iKolona] + aiMatrica[1][iRed][iKolona]);
        }
    }
}