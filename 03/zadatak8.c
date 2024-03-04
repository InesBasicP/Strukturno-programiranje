#include <stdio.h>

int main ()
{

    int a, i;

    printf("Unesite jedan integer broj: ");
    scanf("%d" , &a);

    for (i=1; i<=a; i++)
    {
        if (a%i==0)
        {
            printf("Broj %d je deljiv brojem %d\n", a, i);
        }
    }
    

    return 0;
}