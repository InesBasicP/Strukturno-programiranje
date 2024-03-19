#include<stdio.h>
int main ()
{

    int iUnos, iIndeks;
    int *piUnos = &iUnos;
    int *piIndeks = &iIndeks;

    printf("Unesite jedan integer broj: ");
    scanf("%d", piUnos);

    for(*piIndeks=1; *piIndeks<=iUnos; (*piIndeks)++)
    {
        if(*piUnos % *piIndeks == 0)
        {
            printf("Broj %d je deljiv brojem %d.\n", *piUnos, *piIndeks);
        }
    }

    return 0;
}