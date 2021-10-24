#include<stdio.h>
int main()
{
int i,A[3]={10,12,13},B[3]={25,45,60},C[3];
printf("\n the value of addtion is");
for(i=0;i<3;i++)
{
if (A[i]>B[i])
C[i]=A[i];
else 
(C[i]=B[i]);
}
for(i=0;i<3;i++)
{
printf("%d\n",C[i]);
}
return 0;
}



