#include<stdio.h>
#include<stdlib.h>
int main ()
{

    FILE *pFajl;
    int iBrojac = 0;
    char cNaziv[50];
    float fCena;

    pFajl = fopen("C:/Zadaci/Cenovnik.csv", "r");

    if(pFajl == NULL)
    {
        printf("Otvaranje neuspesno.");
        return (-1);
    }
    else
    {
        while (fscanf(pFajl, "%[^','],%f\n", &cNaziv, &fCena) != EOF)
        {   
            iBrojac++;
            printf("%d.  Naziv: %s,  Cena: %.2f RSD\n", iBrojac, cNaziv, fCena);
        }
    }
    printf("Ukupan broj naslova: %d", iBrojac);


    fclose(pFajl);
    pFajl = NULL;


    return 0;
}