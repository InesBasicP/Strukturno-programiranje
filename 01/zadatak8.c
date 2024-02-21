#include <stdio.h>
 
int main ()
{
    
    int a, b, temp;

    printf("Unesite prvi broj: ");
    scanf("%d" , &a);

    printf("Unesite drugi broj: ");
    scanf("%d" , &b);

    temp = a;
    a = b;
    b = temp;

    printf("Posle zamene vrednosti:");
    printf("\nPrvi broj je %d", a);
    printf("\nDrugi broj je %d", b);

    return 0;






}