#include<stdio.h>

int main()
{
	int a;

	printf("Unesite broj: ");
	scanf("%d", &a);

	if (a > 0) 
	{
		printf("Broj koji ste uneli je pozitivan.\n");
	}
	else if (a < 0)
	{
		printf("Broj koji ste uneli je negativan.\n");
	}
	else
	{
		printf("Broj je jednak 0.\n");
	}

	return 0;
}