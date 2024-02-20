#include <stdio.h>

int main ()
{

    int iTroskoviStampanja, iUnosTeksta, iProcenatMarze, iProcenatPDVa, iTiraz;
    float fAutorskiHonorar , fNabavnaCena , fIznosMarze , fIznosPDVa , fUkupnaVrednost , fProdajnaCena;

    printf("Unesite troskove stampanja: ");
    scanf("%d", &iTroskoviStampanja);

    printf("Unesite troskove unosa teksta: ");
    scanf("%d", &iUnosTeksta);

    printf("Unesite procenat marze: ");
    scanf("%d", &iProcenatMarze);

    printf("Unesite procenat PDV-a: ");
    scanf("%d", &iProcenatPDVa);

    printf("Unesite broj knjiga koje se stampaju (tiraz): ");
    scanf("%d", &iTiraz);

    fAutorskiHonorar = iTroskoviStampanja*0.35;

    fNabavnaCena = iTroskoviStampanja + iUnosTeksta + fAutorskiHonorar;

    fIznosMarze = fNabavnaCena*iProcenatMarze/100;

    fIznosPDVa = (fNabavnaCena + fIznosMarze)*iProcenatPDVa/100;

    fUkupnaVrednost = fNabavnaCena + fIznosMarze + fIznosPDVa;

    fProdajnaCena = fUkupnaVrednost/iTiraz;

    printf("---------------------------------\n");
    printf("Nabavna cena iznosi: %.2f din.\n" , fNabavnaCena);
    printf("Iznos marze: %.2f din\n" , fIznosMarze);
    printf("Iznost PDV-a: %.2f din\n" , fIznosPDVa);
    printf("Ukupna vrednost: %.2f din\n", fUkupnaVrednost);
    printf("Prodajna cena: %.2f din", fProdajnaCena);

    return 0;
}