#include<stdio.h>
int main()
{
int i=100,sum=0;
while(i>=1)
{
sum+=i;
printf("\t i=%d",i);
i--;
}
printf("\nsum of 1 to 100=%d",sum);
return 0;
}

