#include<stdio.h>
int main()
{
int i=1,sum1=0,n;
while(i<=5)
{
printf("\nenter the numbers ");
scanf("%d",&n);
sum1+=n;
i++;
}
printf("\nsum of five numbers=%d",sum1);
return 0;
}

