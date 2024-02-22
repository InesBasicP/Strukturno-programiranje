#include<stdio.h>

int main ()
{

    int iBroj, iBroj1, iBroj2, iBroj3;

    printf("Unesite trocifreni broj: ");
    scanf("%d" , &iBroj);

    iBroj1 = iBroj / 100;
    iBroj2 = (iBroj - iBroj1*100) / 10;
    iBroj3 = iBroj - (iBroj1*100) - (iBroj2*10);

    if (iBroj1 == iBroj3)
    {
        printf("Broj  %d je palindrom." , iBroj);
    }
    else
    {
        printf("Broj %d nije palindrom." , iBroj);
    }

    return 0;
}