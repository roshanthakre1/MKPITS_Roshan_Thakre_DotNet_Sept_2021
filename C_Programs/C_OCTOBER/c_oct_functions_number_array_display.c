#include<stdio.h>
#include<malloc.h>
void DisplayArray(int *,int n);
int main()
{
int *number,n,i;
printf("enter the size of array");
scanf("%d",&n);
number=(int *)malloc(n*sizeof(int));
printf("\n enter %d number",n);
for(i=0 ; i<n ; i++)
{
scanf("%d",(number+i));
}
return 0;
}
void DisplayArray(int *A,int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%5d",*(A+i));
}
}

