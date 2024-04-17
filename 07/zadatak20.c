#include<stdio.h>
#include<math.h>

int main ()
{

    float fPrviBroj, fDrugiBroj, fOstatak;

    printf("Unesite prvi broj: ");
    scanf("%f", &fPrviBroj);

    printf("Unesite drugi broj: ");
    scanf("%f", &fDrugiBroj);

    fOstatak = fmod(fPrviBroj, fDrugiBroj);

    printf("Ostatak pri deljenju broja %f sa brojem %f je %f", fPrviBroj, fDrugiBroj, fOstatak);


    return 0;
}