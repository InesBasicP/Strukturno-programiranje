#include<stdio.h>

int main()
{
    int aiNiz[10] = {12, 3, 8, 90, 150, 6, 37, 23, 88, 47};

    for (int i = 0; i <= 9; i++)
    {
        for (int j = i+1; j <= 9; j++)
        {
            if (aiNiz[i] > aiNiz[j])
            {
                int temp = aiNiz[i];
                aiNiz[i] = aiNiz[j];
                aiNiz[j] = temp;
            }
        }
    }

    printf("%d\n", aiNiz[0]);
    printf("%d\n", aiNiz[1]);
    printf("%d\n", aiNiz[2]);
    printf("%d\n", aiNiz[3]);
    printf("%d\n", aiNiz[4]);
    printf("%d\n", aiNiz[5]);
    printf("%d\n", aiNiz[6]);
    printf("%d\n", aiNiz[7]);
    printf("%d\n", aiNiz[8]);
    printf("%d\n", aiNiz[9]);

    return 0;
}