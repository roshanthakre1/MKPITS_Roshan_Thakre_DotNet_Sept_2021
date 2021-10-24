#include<stdio.h>
int main()
{
int i,n,sum=0;
for(i=0;i<10;i++)
{printf("enter any ten numbers");
scanf("%d",&n);
if(n%3!=0)
continue;
sum+=i;
}
printf("%d is the sum",sum);
return 0;
}

