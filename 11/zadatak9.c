#include<stdio.h>
#include<stdlib.h>
int main ()
{

    FILE *pFajl;
    float fCena;
    char cNaziv[50];
    int iZalihe;
    float fCenaUkupno = 0;

    pFajl = fopen("C:/Zadaci/Zalihe.csv", "r");

    if(pFajl == NULL)
    {
        printf("Otvaranje neuspesno.");
        return (-1);
    }
    else
    {
        while (fscanf(pFajl, "%[^','],%f,%d\n", &cNaziv, &fCena, &iZalihe) != EOF)
        {
            fCenaUkupno = fCenaUkupno + fCena*iZalihe;
        }
    }
    printf("Ukupna vrednost zaliha: %.2f", fCenaUkupno);
    
    fclose(pFajl);
    pFajl = NULL;


    return 0;
}