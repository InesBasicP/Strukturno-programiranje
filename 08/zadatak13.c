#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main ()
{

    char cUnos[100];
    void LeftTrim(char *);
    int iIndeks, iBrojac = 0;

    printf("Unesite tekst: ");
    gets(cUnos);

    for(iIndeks=0; ;iIndeks++)
    {
        if(cUnos[iIndeks] == '\0')
        {
            break;
        }
        iBrojac++;
    }
    printf("\nUneti tekst sa blanco pozicijama na pocetku: \n");
    puts(cUnos);
    printf("Broj karaktera: %d", iBrojac);

    LeftTrim(cUnos);

    return 0;
}

void LeftTrim(char * cUnos)
{
    int iIndeks;
    int iDuzinaNiza = strlen(cUnos);
    int iBrojac = 0;
    
    for(iIndeks=0; ;iIndeks++)
    {
        if(cUnos[iIndeks] == ' ')
        {
            iDuzinaNiza--;
        }
        else if (cUnos[iIndeks] != ' ')
        {
            break;
        }
    }

    cUnos = cUnos + strlen(cUnos) - iDuzinaNiza; // pomeranje pointera (strlen(cUnos) je duzina niza sa spejsovima, a iDuzinaNiza je duzina bez spejsova i onda se to oduzme)

    for(iIndeks=0; ;iIndeks++)
    {
        if(cUnos[iIndeks] == '\0')
        {
            break;
        }
        iBrojac++;
    }

    printf("\n\nUneti tekst bez blanco pozicijama na pocetku: \n");
    puts(cUnos);
    printf("Broj karaktera: %d", iBrojac);
}