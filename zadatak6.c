#include <stdio.h>

int main()
{

    int a;
    printf("Unesite broj centimetara: ");
    scanf("%d", &a);

    printf("\n%.2f cm = %.2f inch", (float)a, a/2.54);





    return 0;


}