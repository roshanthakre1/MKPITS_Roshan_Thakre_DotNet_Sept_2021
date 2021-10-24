#include<stdio.h>
int Sum(int,int);
int Min(int,int);
int Multi(int,int); 
float Div(int,int);
int main()
{

  int a,b,S,M1,M2,D,n; 
  printf("enter 1 for addition/ 2 for minus /n 3 for multiply /n and 4 for divide");
  scanf("%d",&n);
 switch(n)
 {
 case 1:
 printf("\n enter the value of a and b ");
 scanf("%d%d",&a,&b);
 S=Sum(a,b);
 printf("addition of two numbers are%d+%d=%d",a,b,S);
 break;
 
 case 2:
  printf("\n enter the value of a and b ");
 scanf("%d%d",&a,&b);
 M1=Min(a,b);
 printf("substraction of two numbers are%d-%d=%d",a,b,M1);
 break;
 
 case 3:
  printf("\n enter the value of a and b ");
 scanf("%d%d",&a,&b);
 M2=Multi(a,b);
 printf("multiplication of two numbers are%d*%d=%d",a,b,M2);
 break;
 
 case 4:
 printf("\n enter the value of a and b ");
 scanf("%d%d",&a,&b);
 D=Div(a,b);
 printf("division of two numbers are%d/%d=%f",a,b,D);
 break;
 default:

printf("error");
}
return 0;
}

/* 2 steps defination of function */
    int Sum(int a,int b)
      {
          
            return a+b;
      }
   
   int Min(int a,int b)
     {
       return a-b;
     }
  int Multi(int a,int b)
     {
	     return a*b;
     }
   float Div(int a,int b)
     {
            return a/b;
      }

