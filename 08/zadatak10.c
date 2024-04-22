#include<stdio.h>
#include<string.h>
int main ()
{

    int iPozicija(char*, char);
    char cUnos[100];
    char cKarakter;
    int iMesto;

    printf("Unesite tekst: ");
    gets(cUnos);

    printf("Unesite karakter: ");
    scanf("%c", &cKarakter);

    iMesto = iPozicija(cUnos, cKarakter);

    if(iMesto == -1)
    {
        printf("String \"%s\" ne sadrzi karakter \"%c\"", cUnos, cKarakter);
    }
    else
    {
        printf("Karakter \"%c\" se u stringu \"%s\" poslednji put pojavljuje na poziciji %d.", cKarakter, cUnos, iMesto);
    }


    return 0;
}

int iPozicija(char* Niz, char Slovo)
{
    int iIndeks, iMesto = -1;

    for(iIndeks=0; ;iIndeks++)
    {
        if (Niz[iIndeks] == Slovo)
        {
            iMesto = iIndeks;
        }
        
        if (Niz[iIndeks] == '\0')
        {
            break;
        }
    }

    return (iMesto);
}