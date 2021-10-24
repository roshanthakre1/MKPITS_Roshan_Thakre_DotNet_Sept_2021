#include<stdio.h>


int main()
{

 int i,sum=0;
 		for(i=1;i<=100;i++)
 
  	    {
   
          if(i%3==0 && i%7==0)
		  printf("%4d",i);
		sum+=i;
		  }
  
   printf("\n%4d sum of number divisible by 3 and 7",sum);
   
 return 0;
  
   }

