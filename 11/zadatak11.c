
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    FILE *pFajlStudenti;
    FILE *pFajlMesta;
    char cImeStudenta[20];
    char cPrezimeStudenta[20];
    char cNazivMesta[30];
    char cNazivMestaUcitano[30];
    int iPTTBrojStudenta, iPTTBrojMesta;

    pFajlStudenti = fopen("C:/Zadaci/Studenti.csv", "r");

    if (pFajlStudenti == NULL)
    {
        printf("Otvaranje nije uspelo.");
        return -1;
    }
    else
    {
        while (fscanf(pFajlStudenti, "%[^','],%[^','],%d\n", cImeStudenta, cPrezimeStudenta, &iPTTBrojStudenta) != EOF)
        {
            pFajlMesta = fopen("C:/Zadaci/Mesta.csv", "r");
            if (pFajlMesta == NULL)
            {
                printf("Otvaranje nije uspelo.");
                fclose(pFajlStudenti); // zatvoriti fajl pre izlaska
                return -1;
            }
            else
            {
                strcpy(cNazivMesta, "Nepoznato ime mesta");
                while (fscanf(pFajlMesta, "%d,%[^'\n']\n", &iPTTBrojMesta, cNazivMestaUcitano) != EOF)
                {
                    if (iPTTBrojMesta == iPTTBrojStudenta)
                    {
                        strcpy(cNazivMesta, cNazivMestaUcitano);
                        break;
                    }
                }
                fclose(pFajlMesta); // zatvoriti pFajlMesta
            }

            printf("Ime: %s, Prezime: %s, PTT: %d, Mesto: %s\n", cImeStudenta, cPrezimeStudenta, iPTTBrojStudenta, cNazivMesta);
        }
        fclose(pFajlStudenti);
        pFajlStudenti = NULL;
    }

    return 0;
}