#include<stdio.h>

int main()
{

    int iBroj = 10;
    void Udvostruci(int*);

    printf("Pre poziva funkcije Udvostruci() iBroj = %d\n", iBroj);

    Udvostruci(&iBroj);

    printf("Pre poziva funkcije Udvostruci() iBroj = %d\n", iBroj);

    return 0;
}

void Udvostruci (int* piBroj)
{
    *piBroj = *piBroj * 2;
}


