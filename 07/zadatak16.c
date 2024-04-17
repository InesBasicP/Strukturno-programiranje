#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int iUnos;
    int iRezultat;
    int umanjenaVrednost(int);

    printf("Unesite broj: ");
    scanf("%d", &iUnos);

    iRezultat = umanjenaVrednost(iUnos);

    printf("Aspolutna vrednost unetog broja umanjena za 15 je %d.", iRezultat);

    return 0;
}

int umanjenaVrednost(int a)
{
    int iRezultat;

    iRezultat = abs(a) - 15;

    return (iRezultat);
}