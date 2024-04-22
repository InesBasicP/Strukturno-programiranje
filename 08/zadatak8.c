#include<stdio.h>
#include<string.h>
int main ()
{

    int iBrojPojavljivanja (char*, char);
    char cUnos[100];
    char cKarakter;
    int iPojava;

    printf("Unesite tekst: ");
    gets(cUnos);

    printf("Unesite karakter: ");
    scanf("%c", &cKarakter);

    iPojava = iBrojPojavljivanja(cUnos, cKarakter);

    printf("Karakter '%c' se u stringu \"%s\" pojavljuje %d puta.", cKarakter, cUnos, iPojava);

    return 0;
}

int iBrojPojavljivanja (char* Niz, char cSlovo)
{
    int iIndeks;
    int iBrojac;

    for(iIndeks=0; ;iIndeks++)
    {
        if(Niz[iIndeks] == cSlovo)
        {
            iBrojac++;
        }

        if(Niz[iIndeks] == '\0')
        {
            break;
        }
    }

    return(iBrojac);
}