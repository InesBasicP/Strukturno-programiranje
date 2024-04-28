#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{

    char cUnos[100];
    void Inverzno (char *);

    printf("Unesite tekst: ");
    gets(cUnos);

    Inverzno(cUnos);

    return 0;
}

void Inverzno (char * cUnos)
{
    int iIndeks;

    for(iIndeks=0; ;iIndeks++)
    {
        if(cUnos[iIndeks] == '\0')
        {
            break;
        }

        cUnos[iIndeks] = (int) cUnos[iIndeks];
        
        if (cUnos[iIndeks] >= 65 && cUnos[iIndeks] <= 90)
        {
            cUnos[iIndeks] = cUnos[iIndeks] + 32;
        }

        else if (cUnos[iIndeks] >= 97 && cUnos[iIndeks] <= 122)
        {
            cUnos[iIndeks] = cUnos[iIndeks] - 32;
        }
    }
    printf("Nakon poziva funkcije: ");
    puts(cUnos);
}