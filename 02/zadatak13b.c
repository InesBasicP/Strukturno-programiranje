#include<stdio.h>

int main ()
{

    int iBrojMeseca;
    int YesNo;

    printf("Unesite redni broj meseca: ");
    scanf("%d" , &iBrojMeseca);

    switch (iBrojMeseca)
    {
        case 1:
            printf("U prvom mesecu ima 31 dan(a)");
            break;
        
        case 2:
            printf("Da li je godina prestupna? Ukucajte 1 za DA, 0 za NE: ");
            scanf("%d" , &YesNo);
            if (YesNo == 1)
            {
                printf("U drugom mesecu ima 29 dana.");
            }
            else
            {
                printf("U drugom mesecu ima 28 dana");
            }
            break;

        case 3:
            printf("U trecem mesecu ima 31 dan(a)");
            break;

        case 4:
            printf("U cetvrtom mesecu ima 30 dan(a)");
            break;

        case 5:
            printf("U petom mesecu ima 31 dan(a)");
            break;

        case 6:
            printf("U sestom mesecu ima 30 dan(a)");
            break;
        
        case 7:
            printf("U sedmom mesecu ima 31 dan(a)");
            break;

        case 8:
            printf("U osmom mesecu ima 31 dan(a)");
            break;

        case 9:
            printf("U devetom mesecu ima 30 dan(a)");
            break;

        case 10:
            printf("U deesetom mesecu ima 31 dan(a)");
            break;

        case 11:
            printf("U jedanaestom mesecu ima 30 dan(a)");
            break;

        case 12:
            printf("U dvanaestom mesecu ima 31 dan(a)");
            break;    
    

        return 0;
    }
}