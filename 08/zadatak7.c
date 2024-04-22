#include<stdio.h>
#include<string.h>
int main ()
{

    char cTekst1[100];
    char cTekst2[5];
    int iIndeks;

    printf("Unesite tekst: ");
    gets(cTekst1);

    if(strlen(cTekst1) > 5)
    {
        strcpy(cTekst2, cTekst1 + (strlen(cTekst1) - 5));
        printf("Prekopirani string: ");
        puts(cTekst2);
    }


    return 0;
}