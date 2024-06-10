#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
int main ()
{

    FILE *pFajl;
    char cNazivi[50];
    float fCena;
    char cNoviNaziv[50];
    float fNovaCena;
    bool bPostoji;

    printf("Unesite naziv novog izdanja: ");
    gets(cNoviNaziv);

    bPostoji = false;

    pFajl = fopen("C:/Zadaci/Spisak.csv", "r");

    if(pFajl == NULL)
    {
        printf("Otvaranje neuspesno.");
        return (-1);
    }
    else
    {
        while (fscanf(pFajl, "%[^','],%f\n", &cNazivi, &fCena) != EOF)
        {
            if(strcmp(cNazivi, cNoviNaziv) == 0)
            {
                bPostoji = true;
                break;
            }
        }
        fclose(pFajl);
        pFajl = NULL;  
    }

    if(bPostoji == false)
    {
        pFajl = fopen("C:/Zadaci/Spisak.csv", "a");

        if(pFajl == NULL)
        {
            printf("Otvaranje neuspesno.");
            return (-1);
        }
    else
    {
        printf("Unesite vrednost novog izdanja: ");
        scanf("%f", &fNovaCena);
        if(fprintf(pFajl, "%s,%.2f\n", cNoviNaziv, fNovaCena) < 0)
        {
            printf("Upis neuspesan.");
            return -1;
        }
        else
        {
            printf("Podaci dodati.");
            fclose(pFajl);
            pFajl = NULL;
        }
    }
    }
    else
    {
        printf("Naslov vec postoji.");
    }


    return 0;
}