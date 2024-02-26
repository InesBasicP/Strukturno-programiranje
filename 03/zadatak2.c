#include<stdio.h>

// int main()
// {
//     int a;

//     for (a=25; a>=10; a--)
//     {
//         printf("%d\n" , a);
//     }

//     return 0;
// }

// int main()
// {
//     int a;
//     a = 25;

//     while (a>=10)
//     {
//         printf("%d\n" , a);
//         a--;
//     }

//     return 0;
// }

int main ()
{

    int a = 25;

    do
    {
        printf("%d\n" , a);
        a--;
    }
    while (a>=10);

    return 0;

}