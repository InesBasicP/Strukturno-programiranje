#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main ()
{

    char cUnos[100];
    void Trim(char*);
    int iBrojac = 0;
    int iIndeks;

    printf("Unesite tekst: ");
    gets(cUnos);

    for(iIndeks=0; ;iIndeks++)
    {
        if(cUnos[iIndeks] != '\0')
        {
            iBrojac++;
        }
       if(cUnos[iIndeks] == '\0')
        {
            break;
        }
    }

    printf("Uneti tekst sa blanko pozicijama: \n");
    puts(cUnos);
    printf("Broj karaktera: %d\n\n", iBrojac);
    
    Trim(cUnos);

    return 0;
}

void Trim (char * cUnos)
{
    char* LeftTrim(char *);
    char* RightTrim(char *);
    char* cUnos2;
    char* cUnos3;
    int iIndeks, iBrojac = 0;

    cUnos2 = LeftTrim(cUnos);
    cUnos3 = RightTrim(cUnos2);

    for(iIndeks=0; ;iIndeks++)
    {
        if(cUnos3[iIndeks] != '\0')
        {
            iBrojac++;
        }
       if(cUnos3[iIndeks] == '\0')
        {
            break;
        }
    }

    printf("Uneti tekst bez blanko pozicija na kraju: \n");
    puts(cUnos3);
    printf("Broj karaktera: %d", iBrojac);
}

char * LeftTrim (char * cUnos)
{
    int iIndeks, iBrojac = 0;
    char* cUnos2;
    for(iIndeks=0; ;iIndeks++)
    {
        if(cUnos[iIndeks] == ' ')
        {
            iBrojac++;
        }
        if(cUnos[iIndeks] != ' ')
        {
            break;
        }
    }
    cUnos2 = cUnos + iBrojac;
    return(cUnos2);
}

char * RightTrim(char* cUnos2)
{
    int iIndeks, iBrojac=0;
    char* cUnos3;

    for(iIndeks=0; ;iIndeks++)
    {
        if(cUnos2[iIndeks] != ' ')
        {
            iBrojac++;
        }
        if(cUnos2[iIndeks] == ' ')
        {
            break;
        }
    }
    int iBrojacRazmaka = strlen(cUnos2) - iBrojac;
    cUnos2[strlen(cUnos2) - iBrojacRazmaka] = '\0';
    cUnos3 = cUnos2;

    return (cUnos3);   
}

