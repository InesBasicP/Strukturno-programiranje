#include<stdio.h>
#include<stdlib.h>

int main ()
{

    FILE *pFile;
    char NazivPredmeta[30];

    pFile = fopen("C:/Zadaci/Predmeti.csv", "r");

    if(pFile == NULL)
    {
        printf("Otvaranje neuspesno.");
        return -1;
    }
    else
    {
        if((fscanf(pFile, "%[^'\n']\n", &NazivPredmeta) != EOF))
        {
            printf("Naziv predmeta: %s", &NazivPredmeta);
        }
        else
        {
            printf("Fajl je prazan.");
        }
    }

    fclose(pFile);
    pFile = NULL;

    return 0;
}
