#include<stdio.h>

int main ()
{

    int iBrojSati;

    printf("Unesite broj sati parkiranja: ");
    scanf("%d" , &iBrojSati);

    if (iBrojSati <= 3 && iBrojSati > 0)
    {
        printf("Cena parkiranja iznosi %d iznosi 120 din." , iBrojSati);
    }

    else if (iBrojSati > 3)
    {
        printf("Cena parkiranja za %d iznosi %d din." , iBrojSati , 120+(iBrojSati-3)*50);
    }


    return 0;
}