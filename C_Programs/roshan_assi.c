#include<stdio.h>

int main()
{
int i,j,k;
	printf("Enter a value of i and j");
	scanf("%d%d",&i,&j);

	k=(--i)*2+2*(3*j+5);
	printf("\n k %8.2d",k);
	return 0;
}

