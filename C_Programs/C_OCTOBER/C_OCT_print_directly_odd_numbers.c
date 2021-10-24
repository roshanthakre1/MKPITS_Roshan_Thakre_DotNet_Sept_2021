#include<stdio.h>
#include<conio.h>
int main()
{
int i=1,n;
printf("\nEnter value of n to display 1 to n odd numbers");
scanf("%d",&n);
for(;i<=n;i+=2)
{
printf("%5d",i);

}
return 0;
}


