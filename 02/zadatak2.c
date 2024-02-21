#include<stdio.h>

int main()
{
	int a, b;

	printf("Unesite broj: ");
	scanf("%d", &a);

	if (a < 0)
	{
		b = a * (-1);
		printf("Apsolutna vrednost broja %d je %d.", a, b);
	}
	else
	{
		printf("Apsolutna vrednost broja %d je %d.", a, a);
	}
	
	return 0;
}