#include<stdio.h>
#include<stdlib.h>
int main ()
{

    FILE *pFajl;
    char cNaziv[50];
    float fCena;
    int iBrojKomada;
    int iBrojacNula = 0;
    int iRedniBroj = 0;

    pFajl = fopen("C:/Zadaci/Zalihe.csv", "r");

    if (pFajl == NULL)
    {
        printf("Otvaranje neuspesno.");
        return (-1);
    }
    else
    {
        while(fscanf(pFajl, "%[^','], %f,%d\n", &cNaziv, &fCena, &iBrojKomada) != EOF)
        {
            iRedniBroj ++;
            printf("%d. Naziv: %s,  Cena: %.2f, Zalihe: %d kom\n", iRedniBroj, cNaziv, fCena, iBrojKomada);
            if(iBrojKomada == 0)
            {
                iBrojacNula++;
            }
        }
    }
    printf("Broj izdanja bez zaliha: %d", iBrojacNula);

    fclose(pFajl);
    pFajl = NULL;

    return 0;
}