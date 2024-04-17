#include<stdio.h>
#include <math.h>

int main ()
{

    int iRezultat;
    double dRezultat1, dRezultat2, dRezultat3;
    int FunkcijaA(int, int); //PRVA FUNKCIJA
    double FunkcijaB(int,int,int); //DRUGA FUNKCIJA
    double FunkcijaC(int, int, int, int, int); //TRECA FUNKCIJA
    double FunkcijaD(int, int, int, int, int, double); //CETVRTA FUNKCIJA

    // a)
    iRezultat = FunkcijaA(18, 24);
    printf("%d\n", iRezultat);

    // b)
    dRezultat1 = FunkcijaB(15, 5, 7);
    printf("%f\n", dRezultat1);

    // c)
    dRezultat2 = FunkcijaC(14, 2, 2, 4, 25);
    printf("%f\n", dRezultat2);

    //d)
    dRezultat3 = FunkcijaD(3, 4, 1594323, 5, 243, dRezultat2);
    printf("%f", dRezultat3);

    return 0;
}

// ========================================================================

int FunkcijaA(int a, int b) 
{
    int iRezultat;
    iRezultat = a*a + b*b;

    return (iRezultat);
}

// ========================================================================

double FunkcijaB(int a, int b, int c)
{
    double dRezultat;
    dRezultat = sqrt(a) / pow(b,c);

    return(dRezultat);
}

// ========================================================================

double FunkcijaC(int a, int b, int c, int d, int e)
{
    double dRezultat;
    dRezultat = (a + sqrt(pow(b,c)+d)) / e;

    return (dRezultat);
}

// ========================================================================

double FunkcijaD (int a, int b, int c, int d, int e, double f)
{
    double dRezultat;
    dRezultat = pow((pow(c/a, 1.0/b) * 3) / pow(e, 1.0/d), 1.0/a) / f;

    return (dRezultat);

}
