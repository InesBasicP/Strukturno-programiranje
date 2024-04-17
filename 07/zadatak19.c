#include<stdio.h>
#include<math.h>

int main ()
{

    double dRezultat, dUnos, dKoren;

    printf("Vrednost iz koje se vadi koren: ");
    scanf("%lf", &dUnos);

    printf("Koji koren se vadi: ");
    scanf("%lf", &dKoren);

    dRezultat = pow(dUnos, 1.0 / dKoren);

    printf("%.0f. koren broja %.0f je %.2f", dKoren, dUnos, dRezultat);

    return 0;
}