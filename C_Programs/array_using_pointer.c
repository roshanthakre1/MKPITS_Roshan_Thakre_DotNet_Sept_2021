#include<stdio.h>
#include<malloc.h>
int main()
{
int i,n,*A;
 printf("\nname of array is address of first element of array");
 printf("\nname of array is pointer of first element of array");
 printf("\n enter the size of array");
 scanf("%d",&n);
 A=(int *)malloc(n * sizeof(int));
printf("\n enter %d elements of array using pointer notaion",n);
for(i=0;i<n;i++)
{
scanf("%d",(A+i));
}
printf("\n given array is");
for(i=0;i<n;i++)
{
printf("address of A+i=%0x\n",A+i);
printf("data=%4d\n",*(A+i));
}
 return 0;
 }
 

