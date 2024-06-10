#include<stdio.h>
#include<stdlib.h>

int main()
{

    FILE *pFile;
    char cProizvod[20];
    int iBrojUpisanih;

    pFile = fopen("C:/Zadaci/Proizvodi.csv", "a");

    if(pFile == NULL)
    {
        printf("Greska.");
        return -1;
    }
    else
    {
        printf("Unesite naziv proizvoda: ");
        gets(cProizvod);

        iBrojUpisanih = fprintf(pFile, "%s\n", cProizvod);

        if (iBrojUpisanih < 0)
        {
            printf("Greska.");
            return -1;
        }
        else
        {
            printf("Podaci dodati.");
        }
    }
    fclose(pFile);
    pFile = NULL;

    return 0;
}
