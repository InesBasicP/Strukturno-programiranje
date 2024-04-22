#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main ()
{

    void IspisPozicije(char*, char);
    char cUnos[100];
    char cKarakter;

    printf("Unesite tekst: ");
    gets(cUnos);

    printf("Unesite karakter: ");
    scanf("%c", &cKarakter);

    IspisPozicije(cUnos, cKarakter);

    return 0;
}

void IspisPozicije(char* Niz, char Slovo)
{
    int iIndeks;
    bool Indikator = false;

    for(iIndeks=0; ;iIndeks++)
    {
        if (Niz[iIndeks] == Slovo)
        {   
            Indikator = true;
            printf("%d\n", iIndeks);
        }
        
        if (Niz[iIndeks] == '\0')
        {
            if (Indikator == false)
            {
                printf("0");
            } 
            
            break;
        }
    }

}