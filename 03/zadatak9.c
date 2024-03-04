// #include<stdio.h>

// int main ()
// {

//     int a, Cifra1, Cifra2, Cifra3, inv_a;

//     for (a=100; a<=999; a++)
//     {
//         Cifra1 = a/100;
//         Cifra2 = (a-Cifra1*100)/10;
//         Cifra3 = a%10;

//         inv_a = Cifra3*100 + Cifra2*10 + Cifra1;

//         if (a == inv_a * 12)
//         {
//             printf("Broj %d je 12 puta veci od svog inverznog zapisa." , a);
//         }
        
//     }



//     return 0;
// }

// #include<stdio.h>
// int main ()
// {

//     int a, b;

//     printf("borj: ");
//     scanf("%d" , &a);

//     printf("broj: ");
//     scanf("%d" , &b);

//     if (a>=b)
//     {
//         printf("Vrata\n");
//     }
//     if(a==b)
//     {
//         printf("Kvaka\n");
//     }
//     else
//     { 
//         printf("nista");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main ()
// {
//     int iKolone, iRed;

//     for(iRed = 1; iRed <= 2; iRed++)
//     {
//         for (iKolone = 1; iKolone <= 3; iKolone++)
//         {
//             printf("\nred: %d kolona: %d", iRed, iKolone);
//         }
//         printf("\n-----------------");
//     }

//     return 0;
// }

#include<stdio.h>
int main ()
{

    int a, b;
    float c;

    a = 10;
    b = 3;

    c = (float)a / b;
    printf("Koliko je c %f" ,c);



    return 0;
}