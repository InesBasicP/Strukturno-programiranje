#include<stdio.h>
int main ()
{

    int iUnos;
    char cKarakter;
    char cIspis(int);

    printf("Unesite broj: ");
    scanf("%d", &iUnos);

    cKarakter = cIspis(iUnos);

    printf("%c", cKarakter);

    return 0;
}

char cIspis(int iUnos)
{
    char cKarakter;
    
    if(iUnos % 2 == 0)
    {
        cKarakter = 'P';
    }
    else
    {
        cKarakter = 'N';
    }

    return(cKarakter);
}


// void cIspis(int iUnos) ------> poziv: cIspis(iUnos)
// {
//     if (iUnos % 2 == 0)
//     {
//         printf("P");
//     }
//     else
//     {
//         printf("N");
//     }
// }