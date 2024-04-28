#include<stdio.h>
int main()
{
    int aiNiz[10] = {12, 3, 8, 90, 150, 6, 37, 23, 88, 47}, i, j;
    for (i = 0; i <= 9; i++)
    {
        for (j = i+1; j <= 9; j++)
        {
            if (aiNiz[i] > aiNiz[j])
            {
                int temp = aiNiz[i];
                aiNiz[i] = aiNiz[j];
                aiNiz[j] = temp;
            }
        }
    }
    for(j=0; j<=9; j++)
    {
         printf("aiNiz[%d] = %d\n", j, aiNiz[j]);
    }
    return 0;
}