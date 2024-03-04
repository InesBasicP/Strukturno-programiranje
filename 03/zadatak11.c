#include<stdio.h>
int main ()
{

    int iBrPrakticnih, iBrTeorijskih, iBrNetacnih;

    for (iBrPrakticnih=0; iBrPrakticnih <= 30; iBrPrakticnih++)
    {
        for (iBrTeorijskih=0; iBrTeorijskih <=30; iBrTeorijskih++)
        {
            for(iBrNetacnih=0; iBrNetacnih <=30; iBrNetacnih++)
            {
                if(iBrPrakticnih + iBrTeorijskih + iBrNetacnih <= 25)
                {
                    if (iBrPrakticnih*33 + iBrTeorijskih*15 - iBrNetacnih*10 == 426)
                    {
                        printf("Student C je skupio %d poena na sledeci nacin: \n", 426);
                        printf("Broj prakticnih pitanja na koje je tacno odgovorio je %d.\n", iBrPrakticnih);
                        printf("Broj teorijskih pitanja na koje je tacno odgovorio je %d.\n", iBrTeorijskih);
                        printf("Broj pitanja na koje je netacno odgovorio je %d.\n" , iBrNetacnih);
                        printf("-----------------------------------------------------\n");
                    }

                    if (iBrPrakticnih*33 + iBrTeorijskih*15 - iBrNetacnih*10 == 430)
                    {
                        printf("Student A je skupio %d poena na sledeci nacin: \n", 430);
                        printf("Broj prakticnih pitanja na koje je tacno odgovorio je %d.\n", iBrPrakticnih);
                        printf("Broj teorijskih pitanja na koje je tacno odgovorio je %d.\n", iBrTeorijskih);
                        printf("Broj pitanja na koje je netacno odgovorio je %d.\n" , iBrNetacnih);
                        printf("-----------------------------------------------------\n");
                    }

                    if (iBrPrakticnih*33 + iBrTeorijskih*15 - iBrNetacnih*10 == 484)
                    {
                        printf("Student B je skupio %d poena na sledeci nacin: \n", 484);
                        printf("Broj prakticnih pitanja na koje je tacno odgovorio je %d.\n", iBrPrakticnih);
                        printf("Broj teorijskih pitanja na koje je tacno odgovorio je %d.\n", iBrTeorijskih);
                        printf("Broj pitanja na koje je netacno odgovorio je %d.\n" , iBrNetacnih);
                        printf("-----------------------------------------------------\n");
                    }
                }
            }
        }
    }

    return 0;
}