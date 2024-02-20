#include <stdio.h>

int main ()
{
    int iTroskoviProizvodnje;
    int iObimProizvodnje;

    printf("Unesite troskove proizvodnje: ");
    scanf("%d" , &iTroskoviProizvodnje);

    printf("Unesite obim proizvodnje: ");
    scanf("%d" , &iObimProizvodnje);

    printf("Cena kostanja iznosi %.2f din. po komadu proizvoda" , (float)iTroskoviProizvodnje/iObimProizvodnje);

    return 0;
}