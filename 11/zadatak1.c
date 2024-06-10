#include<stdio.h>
#include<stdlib.h>

int main()
{

    FILE *pFile;

    pFile = fopen("C:/Zadaci/Prvi.csv", "w");

    if(pFile == NULL)
    {
        printf("Neuspesno.");
    }
    
    fclose(pFile);
    pFile = NULL;

    return 0;
}
