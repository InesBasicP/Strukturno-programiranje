#include<stdio.h>
#include<string.h>

int main()
{

    char cUnos[100];


    printf("Unesite string: ");
    gets(cUnos);

    if(strlen(cUnos) > 3)
    {
        printf("3. karakter unetog stringa je: %c", cUnos[2]);
    }
    else
    {
        printf("Broj karaktera treba da je barm 3.");
    }


    return 0;
}