/*Wap to enter 10 number and count even number and odd numbers seprately*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n[10],i,size;
int Event_count=0,Odd_count=0;
printf("Enter any ten numbers\n");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",n[i]);
}
for(i=0;i<size;i++)
{
if(n[i]%2==0)
{
printf("the number is even=%d",n[i]);
}
else
{
printf("the number is odd=%d",n[i]);
}
count++;
}
return 0;
}

