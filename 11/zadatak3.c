#include<stdio.h>
#include<stdlib.h>

int main ()
{

    FILE *pFile;
    char cPredmet[30];
    int iIndeks, iBrojUnetihPredmeta;

    pFile = fopen("C:/Zadaci/Predmeti.csv", "w");

    if (pFile == NULL)
    {
        printf("Neuspesno otvaranje.");
        return -1;
    }
    else
    {
        printf("Unesite nazive predmeta.\n");

        for(iIndeks=0; iIndeks<=4; iIndeks++)
        {
            printf("Unesite naziv %d. predmeta: ", iIndeks+1);
            gets(cPredmet);

            iBrojUnetihPredmeta = fprintf(pFile, "%s\n", cPredmet);

            if(iBrojUnetihPredmeta == NULL)
            {
                printf("Neuspesno.");
                return -1;
            }
        }
        
    }
    printf("Podaci uneti.");
    fclose(pFile);
    pFile = NULL;
    












    return 0;
}