#include<stdio.h>
int main()
{

    int iDinari;
    float fKurs;
    float fEvro;
    float Konverzija(int,float);

    printf("Unesite iznos dinara: ");
    scanf("%d", &iDinari);

    printf("Unesite iznos dinara potreban za 1 euro: ");
    scanf("%f", &fKurs);

    fEvro = Konverzija(iDinari, fKurs);
    printf("%.2f RSD = %.2f EUR", (float)iDinari, fEvro);

    return 0;
}

float Konverzija (int iDinari, float fKurs)
{
    float fEvro;
    fEvro = (float)iDinari / fKurs;

    return(fEvro);
}