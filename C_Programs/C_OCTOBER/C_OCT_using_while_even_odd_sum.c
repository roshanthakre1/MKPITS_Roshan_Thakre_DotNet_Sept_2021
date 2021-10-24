#include<stdio.h>
int main()
{
int i=0,sum1=0,sum2=0;
while(i<=100)
{
i++;
if(i%2==0)
{
sum1+=i;
}
else
{
sum2+=i;
}
}
printf("\nsum1 even=%d \nsum2 odd=%d",sum1,sum2);
return 0;
}

