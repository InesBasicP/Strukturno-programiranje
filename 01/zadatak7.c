#include <stdio.h>

int main()
{
    int a;
    float b;

    printf("Unesite zapreminu rezervoara automobila (u litrima) ");
    scanf("%d" , &a);

    printf("Unesite prosecnu potrosnju u litrima na 100km: ");
    scanf("%f", &b); //  NE SME DA SE SPECIFICIRA BROJ DECIMALA !!!!!!!!!!!!!!!!!!!!!!!

    printf("Uz prosecnu potrosnju od %.2f litara/100km automobil moze da predje %.2f km", b, (100/b)*a);


    return 0;


}