#include<stdio.h>
 
int CalSum(int);
 
int main() {
   int i, n;
   int RESULT;
 
   printf("Enter a number = ");
   scanf("%d", &n);
 
   RESULT = CalSum(n);
   printf("\nSum of Number From 1 to %d = %d",n,RESULT);
 
   return (0);
}
 
int CalSum(int n) 
{
   int res;
   if (n == 1) 
   {
      return (1);
   } 
   else 
   {
      res = n + CalSum(n - 1);
   }
   return (res);
}

