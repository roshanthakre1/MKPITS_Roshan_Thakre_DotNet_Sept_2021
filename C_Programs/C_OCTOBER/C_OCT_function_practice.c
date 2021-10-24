#include<stdio.h>
/*step 1 : declarationof prototype */
int Outsource(int,int);
int main()
{
int x=10,y=20,z;
z=Outsource(x,y);
/*step 3 call to function*/
printf("\n addition=%d");
z=Outsource(45,45);

printf("\n addition =%d",z);
return 0;
}
/*step 2 defination of function*/
int Outsource(int a,int b)
{
int c;
c=a+b;
return c;
}

