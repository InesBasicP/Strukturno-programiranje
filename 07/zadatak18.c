#include<stdio.h>
#include<math.h>

int main()
{

    int iUnos;
    float fRezultat;

    printf("Unesite broj: ");
    scanf("%d", &iUnos);

    fRezultat = sqrt(iUnos);

    printf("Kvadratni koren broja %f je %f", (float)iUnos, fRezultat);
    
    return 0;
}