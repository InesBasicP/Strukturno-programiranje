#include<stdio.h>
#include<math.h>

int main ()
{

    int iSati , iMinuti ;

    printf("Unesite tacno vreme - sate: ");
    scanf("%d" , &iSati);

    printf("Unesite tacno vreme - minute: ");
    scanf("%d" , &iMinuti);


    printf("Ugao izmedju velike kazaljke i broja 12 na satu je: %.2f" , (float)iMinuti*6);

    printf("\nUgao izmedju male kazaljke i broja 12 na satu je: %.2f" , (float)(iSati*30)+(iMinuti*0.5));

    printf("\nUgao izmedju male i velike kazaljke na satu je: %.2f" , fabs((float)(iSati*30)+(iMinuti*0.5)-(float)iMinuti*6));

    return 0;
}