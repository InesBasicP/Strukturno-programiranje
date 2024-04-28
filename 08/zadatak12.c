#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main ()
{

    void Analiziraj(char*);
    char cUnos[100];

    printf("Unesite tekst: ");
    gets(cUnos);

    Analiziraj(cUnos);

    return 0;
}

void Analiziraj (char* cUnos)
{
    int iBrojacVelikaSlova = 0;
    int iBrojacMalaSlova = 0;
    int iBrojacSamoglasnik = 0;
    int iBrojacSuglasnik = 0;
    int iBrojacCifra = 0;
    int iBrojacSpace = 0;
    int iBrojacTacka = 0;
    int iBrojacZarez = 0;
    int iIndeks;

    for(iIndeks=0; ;iIndeks++)
    {
        if(cUnos[iIndeks] >= 'A' && cUnos[iIndeks] <= 'Z')
        {
            iBrojacVelikaSlova++;
        }
        else if(cUnos[iIndeks] >= 'a' && cUnos[iIndeks] <= 'z')
        {
            iBrojacMalaSlova++;
        }
    //    toupper() - ne prepravlja vrednost u memoriji, samo u run-timeu, pa mora za svaki slucaj pojedinacno da se pise
       if(toupper(cUnos[iIndeks]) == 'A' || toupper(cUnos[iIndeks]) == 'E' || toupper(cUnos[iIndeks]) == 'I' || toupper(cUnos[iIndeks]) == 'O' || toupper(cUnos[iIndeks]) == 'U')
       {
            iBrojacSamoglasnik++;
       }
       else if (isalpha(cUnos[iIndeks]) && cUnos[iIndeks] != 'A' && cUnos[iIndeks] != 'E' && cUnos[iIndeks] != 'I' && cUnos[iIndeks] != 'O' && cUnos[iIndeks] != 'U')
       {
            iBrojacSuglasnik++;
       }
       else if(cUnos[iIndeks] >= '0' && cUnos[iIndeks] <= '9')
       {
            iBrojacCifra++;
       }
       else if(cUnos[iIndeks] == ' ')
       {
            iBrojacSpace++;
       }
       else if(cUnos[iIndeks] == '.')
       {
            iBrojacTacka++;
       }
       else if(cUnos[iIndeks] == ',')
       {
            iBrojacZarez++;
       }
       else if(cUnos[iIndeks] == '\0')
       {
        break;
       }
    }

    printf("Broj velikih slova: %d\n", iBrojacVelikaSlova);
    printf("Broj malih slova: %d\n", iBrojacMalaSlova);
    printf("Broj samoglasnika: %d\n", iBrojacSamoglasnik);
    printf("Broj suglasnika: %d\n", iBrojacSuglasnik);
    printf("Broj cifara: %d\n", iBrojacCifra);
    printf("Broj blanco karaktera: %d\n", iBrojacSpace);
    printf("Broj tacaka: %d\n", iBrojacTacka);
    printf("Broj zareza: %d", iBrojacZarez);
}