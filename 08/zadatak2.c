#include <stdio.h>
#include<stdbool.h>

int main ()
{

    bool bIsNumeric(char);
    char cUnos;

    printf("Unesite jedan karakter: ");
    scanf ("%c", &cUnos);


    if (bIsNumeric(cUnos) == true)
    {
        printf("Uneti karakter je broj.");
    }
    else
    {
        printf("Uneti karakter nije broj.");
    }
    
    return 0;                                                       
}

    bool bIsNumeric(char a)
{
    if (a >= '0' && a <= '9' )
    {
        return(true);
    }
    else
    {
        return(false);
    }
}