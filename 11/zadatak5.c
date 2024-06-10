#include<stdio.h>
#include<stdlib.h>
int main ()
{

    FILE *pFajl;
    char NazivPredmeta[30];
    int iBrojUpisanih, iIndeks;

    pFajl = fopen("C:/Zadaci/Predmeti.csv", "r");

    if(pFajl == NULL)
    {
        printf("Otvaranje je neuspesno.");
        return -1;
    }
    else
    {
        while (fscanf(pFajl, "%[^'\n']\n", &NazivPredmeta) != EOF)
        {
            printf("%s\n", NazivPredmeta);
        }
        
    }
    
    fclose(pFajl);
    pFajl = NULL;

    return 0;
}