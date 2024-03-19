#include<stdio.h>
int main()
{

    int iUnos, iStotine, iDesetice, iJedinice;
    int *piUnos = &iUnos;
    int *piStotine = &iStotine;
    int *piDesetice = &iDesetice;
    int *piJedinice = &iJedinice;

    printf("Unesite broj: ");
    scanf("%d", piUnos);

    *piStotine = *piUnos / 100;
    *piDesetice = (*piUnos - (*piStotine * 100)) / 10;
    *piJedinice = *piUnos % 10;

    printf("%d x 100\n", *piStotine);
    printf("%d x 10\n", *piDesetice);
    printf("%d x 1", *piJedinice);




    return 0;
}