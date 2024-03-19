#include<stdio.h>
int main()
{

    int iPrvaCifra, iPetaCifra, iZbir, iPIN;
    const int iDrugaCifra = 2;
    const int iTrecaCifra = 4;
    const int iCetvrtaCifra = 4;

    int *piPrvaCifra = &iPrvaCifra;
    int *piPetaCifra = &iPetaCifra;
    int *piZbir = &iZbir;
    int *piPIN = &iPIN;


    for(*piPrvaCifra=1; *piPrvaCifra <= 9; (*piPrvaCifra)++)
    {
        for(*piPetaCifra=0; *piPetaCifra <= 9; (*piPetaCifra)++)
        {
            *piPIN = *piPrvaCifra*10000 + iDrugaCifra*1000 + iTrecaCifra*100 + iCetvrtaCifra*10 + *piPetaCifra;
            *piZbir = *piPrvaCifra* *piPrvaCifra + iDrugaCifra*iDrugaCifra + iTrecaCifra*iTrecaCifra + iCetvrtaCifra*iCetvrtaCifra + *piPetaCifra* *piPetaCifra;
            if(*piPIN % *piZbir == 0)
            {
                printf("PIN kod je %d", *piPIN);
            }
        }
    }








    return 0;
}