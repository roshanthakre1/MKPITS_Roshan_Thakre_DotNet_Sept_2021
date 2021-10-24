#include<stdio.h>
int Add (int,int);
int Sub (int,int);
int Multi (int,int);
float Div (int,int);
int main()
{
int N1,N2,Ans;
printf("\n enter value of N1 and N2");
scanf("%d%d",&N1,&N2);
Ans=Add(N1,N2);
printf("\n%d + %d = %d",N1,N2,Ans);
Ans=Sub(N1,N2);
printf("\n%d - %d = %d",N1,N2,Ans);
Ans=Multi(N1,N2);
printf("\n%d * %d = %d",N1,N2,Ans);
Ans=Div(N1,N2);
printf("\n%d / %d = %2.2f",N1,N2,Ans);

return 0;
}
int Add (int a,int b)
{
return a+b;
}
int Sub (int a,int b)
{
return a-b;
}
int Multi (int a,int b)
{
return a*b;
}
float Div (int a,int b)
{
return a/b;
}

