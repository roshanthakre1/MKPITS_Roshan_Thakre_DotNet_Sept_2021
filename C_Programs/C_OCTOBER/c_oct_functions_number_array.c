#include<stdio.h>
#include<malloc.h>
void DisplayArray(int *,int n);
int main()
{
int *number,n,i;
printf("enter the size of array");
scanf("%d",&n);
number=(int *)malloc(n*sizeof(int));
for(i=0 ; i<n ; i++)
{
scanf("%d",(number+i));
}
return 0;
}

