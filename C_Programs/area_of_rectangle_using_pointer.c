#include<stdio.h>
float arearectangle(int ,int);
int main()
{
int length,breath,A;
printf("\n enter length and breath of rectangle");
scanf("%d%d",&length,&breath);
A=arearectangle(length,breath);
printf("\narea of rectangle=%6.5d and ",A);
return 0;
}
float arearectangle(int l,int b)
{
return l*b;
}

