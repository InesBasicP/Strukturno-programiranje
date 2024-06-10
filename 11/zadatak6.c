#include<stdio.h>
#include<stdlib.h>
int main ()
{

    FILE *pFajl;
    char cIme[20];
    char cPrezime[20];
    int iBrojUpisanih;

    pFajl = fopen("C:/Zadaci/Predmeti.csv", "w");

    if(pFajl == NULL)
    {
        printf("Otvaranje neuspesno.");
        return (-1);
    }
    else
    {
        printf("Unesite ime i prezime: ");
        scanf("%[^','],%s", &cIme, &cPrezime);

        iBrojUpisanih = fprintf(pFajl, "%s,%s\n", cIme, cPrezime);

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

    fclose(pFajl);
    pFajl = NULL;


    return 0;
}