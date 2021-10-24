#include <stdio.h>
int main()
int Pow(int x, int y);
{

	int power = 1, i;

	for (i=1; i<= y;i++)
	 {
		power = power*x;
	}

	return power;

}


	int base, exponent;
{
	printf("Enter Base: ");
	scanf("%d", &base);

	printf("Enter Power: ");
	scanf("%d", &exponent);

	printf("%d power  %d = %d", base, exponent, Pow(base, exponent));

}

