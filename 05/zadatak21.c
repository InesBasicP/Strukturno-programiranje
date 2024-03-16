#include<stdio.h>
int main ()
{

    int aiNiz1[10] = {12, 3, 8, 90, 150, 18, 75, 11, 9, 28};
    int aiNiz2[10] = {62, 6, 37, 23, 88, 47, 43, 8, 59, 81};
    int iZbir;

    iZbir = aiNiz1[0] * aiNiz2[9] + aiNiz1[1] * aiNiz2[8] + aiNiz1[2] * aiNiz2[7] + aiNiz1[3] * aiNiz2[6] + aiNiz1[4] * aiNiz2[5];

    printf("Zbir: %d", iZbir);


    return 0;
}