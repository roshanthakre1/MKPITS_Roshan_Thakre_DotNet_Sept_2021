#include<stdio.h>
int main()
{
int i,sum=0;
for(i=0;i<101;i++)
{
if (i%7==0)
printf("%d\n",i);
sum+=i;
}
printf("result of addition=%d",sum);
return 0;
}



