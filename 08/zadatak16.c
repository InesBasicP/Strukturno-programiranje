#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
int main ()
{

    char cUnos[100];
    void VelikaSlova(char *);

    printf("Unesite tekst: ");
    gets(cUnos);

    // strupr(cUnos);
    // puts(cUnos);

    VelikaSlova(cUnos);

    return 0;
}

void VelikaSlova(char * cUnos)
{
    int iIndeks;

    for(iIndeks=0; ;iIndeks++)
    {   
        if (cUnos[iIndeks] == '\0')
        {
            break;
        }

        cUnos[iIndeks] = (int) cUnos[iIndeks];
        
        if (cUnos[iIndeks] >= 97 && cUnos[iIndeks] <= 122)
        {
            cUnos[iIndeks] = cUnos[iIndeks] - 32;
        }
    }
    printf("%s", cUnos);
}