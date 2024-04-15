#include<stdio.h>

int main ()
{

    int iBroj;
    void Ispis(int);

    printf("Unesite broj: ");
    scanf("%d", &iBroj);

    Ispis(iBroj);

    return 0;
}

void Ispis(int iBroj)
{
    int iRezultat;
    iRezultat = iBroj * 5;
    printf("Petostruka vrednost broja %d je %d.", iBroj, iRezultat);
}