#include<stdio.h>

int main ()
{

    int iBrojCasovaRada , iCenaCasa, iBrojPrekovremenihSati , iCenaPrekovremenogSata , iGodineStaza , iPio , iZdrOsiguranje; 
    float fBrutoPlata , fPIO , fZdravstvenoOsiguranje , fNetoPlata ;

    printf("Unesite broj casova redovnog rada: ");
    scanf("%d" , &iBrojCasovaRada);

    printf("Unesite cenu 1 casa redovnog rada: ");
    scanf("%d" , &iCenaCasa);

    printf("Unesite broj casova prekovremenog rada: ");
    scanf("%d" , &iBrojPrekovremenihSati);

    printf("Unesite cenu 1 casa prekovremenog rada: ");
    scanf("%d" , &iCenaPrekovremenogSata);

    printf("Unesite broj godina radnog staza: ");
    scanf("%d" , &iGodineStaza);

    fBrutoPlata = (iBrojCasovaRada*iCenaCasa)+(iBrojPrekovremenihSati*iCenaPrekovremenogSata)+(iGodineStaza*500);

    printf("Bruto plata: %.2f\n" , fBrutoPlata);

    printf("Unesite procenat PIO: ");
    scanf("%d" , &iPio);

    printf("Unesite procenat zdravstvenog osiguranja: ");
    scanf("%d" , &iZdrOsiguranje);

    fPIO = ((float)iPio/100)*fBrutoPlata;
    printf("PIO: %.2f" , fPIO);

    fZdravstvenoOsiguranje = ((float)iZdrOsiguranje/100)*fBrutoPlata;
    printf("\nZdravstveno osiguranje: %.2f" , fZdravstvenoOsiguranje);

    fNetoPlata = fBrutoPlata-fPIO-fZdravstvenoOsiguranje;
    printf("\nNeto plata: %.2f" , fNetoPlata);

    return 0;
}