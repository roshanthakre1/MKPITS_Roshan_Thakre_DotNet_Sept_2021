#include<stdio.h>
int main()
{
int i,n;
printf("\nEnter value of n to display 1 to n");
scanf("%d",&n);
printf("no square cube sqrt",n);
for(i=1;i<=n;i++)
{
printf("%5d %5d %5d",i,i*i,i*i*i,sqrt((double)i));

}
return 0;
}


