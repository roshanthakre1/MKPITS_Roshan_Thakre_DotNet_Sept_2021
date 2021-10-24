#include<stdio.h>
int main()
{
int a;
printf("\n enter the number");
scanf("%d",&a);
if(a==0)
{
printf("number is zero");
}
else if(a>>0)
{
printf("number is positive");
}
else
{
printf("number is negative");
}
if(a%2==0)
 {
 printf(" the number is even");
 }
 else 
{
printf(" the number is odd");
}
return 0;
}

