#include<stdio.h>
#include<string.h>
int main ()
{

    char cTekst[100];
    int iIndeks;

    printf("Unesite string: ");
    gets(cTekst);

    strrev(cTekst);

    for(iIndeks=0; ;iIndeks++)
    {
        printf("%c\n", cTekst[iIndeks]);
        if(cTekst[iIndeks] == '\0')
        {
            break;
        }
    }


    return 0;
}