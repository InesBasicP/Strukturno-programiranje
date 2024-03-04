#include<stdio.h>

// a)
int main ()
{

    int iBrRedova, iBrZvezdica;

    for(iBrRedova=1; iBrRedova<8; iBrRedova++)
    {
        for(iBrZvezdica=1; iBrZvezdica<=iBrRedova; iBrZvezdica++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}

// b)
int main ()
{

    int a, b;

    for (a=1; a<7; a++)
    {
        for(b=6; b>=a; b--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// c)
int main ()
{
    int a,b,c;

    for(a=1; a<7; a++)
    {
        for(c=1; c<a; c++)
        {
            printf(" ");
        }

        for(b=6; b>=a; b--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

// d)
int main()
{
    int a,b,c;

    for(a=1; a<=7; a++)
    {
        for(c=6; c>=a; c--)
        {
            printf(" ");
        }

        for(b=1; b<=a; b++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}