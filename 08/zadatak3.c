#include<stdio.h>
#include<string.h>
int main ()
{

    char cTekst[100];
    int iBrojKaraktera;

    // gets(cTekst);
    // iBrojKaraktera = strlen(cTekst);
    // printf("Tekst %s sadrzi %d karaktera.", cTekst, iBrojKaraktera);

    int BrojKaraktera(char*);
    int iBroj;

    gets(cTekst);

    iBroj = BrojKaraktera(cTekst);

    printf("Tekst %s sadrzi %d karaktera.", cTekst, iBroj);

    return 0;
}

int BrojKaraktera (char* cTekst)
{
    int iBrojac = 0;
    int iIndeks;

    for(iIndeks=0 ;; iIndeks++)  //Namerno nismo definisali duzinu
    {
        if (cTekst[iIndeks] != '\0')
        {
            iBrojac++;
        }
        else
        {
            break;
        }
    }

    return (iBrojac);
}
