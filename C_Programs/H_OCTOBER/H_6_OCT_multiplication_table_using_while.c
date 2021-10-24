/*Wap multiplication table using while loop*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
printf("Enter a number\n");
scanf("%d",&n);
i=1;
while(i<=10)
{
printf("%d*%d=%d\n",n,i,n*i);
i++;
}
return 0;
}



