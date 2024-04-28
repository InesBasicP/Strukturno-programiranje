#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
int main ()
{

    char cUnos[100];
    void MalaSlova(char *);

    printf("Unesite tekst: ");
    gets(cUnos);

    // strlwr(cUnos);
    // puts(cUnos);

    MalaSlova(cUnos);

    return 0;
}

void MalaSlova(char * cUnos)
{
    int iIndeks;

    for(iIndeks=0; ;iIndeks++)
    {   
        if (cUnos[iIndeks] == '\0')
        {
            break;
        }

        cUnos[iIndeks] = (int) cUnos[iIndeks];
        
        if (cUnos[iIndeks] >= 65 && cUnos[iIndeks] <= 90)
        {
            cUnos[iIndeks] = cUnos[iIndeks] + 32;
        }
    }
    printf("%s", cUnos);
}