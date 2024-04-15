#include<stdio.h>
int main ()
{

    int iBroj;
    int iRezultat;
    int iStostruko(int);

    printf("Unesite broj: ");
    scanf("%d", &iBroj);

    iRezultat = iStostruko(iBroj);

    printf("Stostruka vrednost broja %d je %d.", iBroj, iRezultat);

    return 0;
}

int iStostruko(int iBroj)
{
    int iRezultat;
    iRezultat = iBroj * 100;

    return (iRezultat);
}