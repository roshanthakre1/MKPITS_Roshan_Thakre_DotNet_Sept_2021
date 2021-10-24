/*Wap to enter 10 number and count even number and odd numbers seprately*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n[10],i;
int Even_count=0,Odd_count=0,even,odd;
printf("Enter any ten numbers\n");
for(i=0;i<10;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<10;i++)
{
if(n[i]%2==0)
{
Even_count++;
}
else
{
Odd_count++;
}
}
printf("total even number =%d",Even_count);
printf("total odd number =%d",Odd_count);

return 0;
}

