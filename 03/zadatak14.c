#include<stdio.h>

// a)
int main ()
{

    int i;

    for (i=1; i<=4; i++)
    {
        printf("%d\n" ,i);
    }

    return 0;
}

// b)
int main ()
{
    int m = 3;

    while(m<=10)
    {
        if(m%2 != 0)
        {
            printf("%d\n", m);
        }
        m = m+1;
    }
    return 0;
}

// c)
int main ()
{

    int i = 2;

    do
    {
        printf("%d\n", i);
        i++;  
    } 
    while (i<=6);

    return 0;
}


// d)
int main()
{

    int i = 1;

    while(i<=10)
    {
        printf("%d\n", i);
        i += 3;
    }

    return 0;
}

// e)
int main ()
{

    int i, j;

    for(i = 1; i <= 2; i++)
    {
        for(j = 2; j <= 3; j++)
        {
            printf("i = %d, j = %d\n", i, j);
        }
    }

    return 0;
}
