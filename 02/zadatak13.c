#include<stdio.h>

int main ()
{

    int iBrojMeseca;
    int YesNo;

    printf("Unesite redni broj meseca: ");
    scanf("%d" , &iBrojMeseca);

    if (iBrojMeseca == 1)
    {
        printf("U prvom mesecu ima 31 dan(a)");
    }
    else if (iBrojMeseca == 2)
    {
        printf("Da li je godina prestupna? Ukucajte 1 za DA, 0 za NE: ");
        scanf("%d", &YesNo);

        if (YesNo == 1)
        {
            printf("U drugom mesecu ima 29 dana");
        }
        else
        {
            printf("U drugom mesecu ima 28 dana");
        }
    }
    else if (iBrojMeseca == 3)
    {
        printf("U trecem mesecu ima 31 dan(a)");
    }
    else if (iBrojMeseca == 4)
    {
        printf("U cetvrtom mesecu ima 30 dan(a)");
    }
    else if (iBrojMeseca == 5)
    {
        printf("U petom mesecu ima 31 dan(a)");
    }
    else if (iBrojMeseca == 6)
    {
        printf("U sestom mesecu ima 30 dan(a)");
    }
    else if (iBrojMeseca == 7)
    {
        printf("U sedmom mesecu ima 31 dan(a)");
    }
    else if (iBrojMeseca == 8)
    {
        printf("U osmom mesecu ima 31 dan(a)");
    }
    else if (iBrojMeseca == 9)
    {
        printf("U devetom mesecu ima 30 dan(a)");
    }
    else if (iBrojMeseca == 10)
    {
        printf("U desetom mesecu ima 31 dan(a)");
    }
    else if (iBrojMeseca == 11)
    {
        printf("U jedanaestom mesecu ima 30 dan(a)");
    }
    else if (iBrojMeseca == 12)
    {
        printf("U dvanaestom mesecu ima 31 dan(a)");
    }

    return 0;
}