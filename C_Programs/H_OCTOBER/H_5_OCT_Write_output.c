/*initialy we take 4 values of a,b,c,d "c stores the value of a and others are stored 0 because --operation done in a,b,d*/
#include<stdio.h>
#include<math.h>


int main()
{
 int a=1;
 int b=1;
 int c=a||--b;
 int d=a--&&--b;
 printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);



 return 0;
}

