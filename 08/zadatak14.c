#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main ()
{

    char cUnos[100];
    void RightTrim(char *);
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
    printf("\nUneti tekst sa blanco pozicijama na kraju: \n");
    puts(cUnos);
    printf("Broj karaktera: %d", iBrojac);

    RightTrim(cUnos);

    return 0;
}

void RightTrim(char * cUnos)
{
    int iIndeks;
    int iBrojac = 0;
    int iBrojacRazmaka;
    
    for(iIndeks=0; ;iIndeks++)
    {
        if(cUnos[iIndeks] != ' ')
        {
            iBrojac++;              // prebrojava se broj karaktera u stringu koji nisu spejs
        }
        else if (cUnos[iIndeks] == ' ')
        {
            break;
        }
    }

    iBrojacRazmaka = strlen(cUnos) - iBrojac; // da bi se posle taj broj karaktera oduzeo od citavog stringa, i time dobio broj razmaka

    cUnos[strlen(cUnos) - iBrojacRazmaka] = '\0'; // NULL karakter se postavi na prvo mesto posle poslednjeg nespejs karaktera u stringu, tako sto se od ukupnog broja karaktera oduzme broj razmaka

    printf("\n\nUneti tekst bez blanco pozicijama na kraju: \n");
    puts(cUnos);
    printf("Broj karaktera: %d", iBrojac);
}