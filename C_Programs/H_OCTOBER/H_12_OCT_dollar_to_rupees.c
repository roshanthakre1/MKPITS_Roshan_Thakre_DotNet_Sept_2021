#include<stdio.h>
/* function Wap to covert dollar to rupees */
/*step 1: declaration of prototype*/

 void Dollar_Rupees(int);
int main()
{
float Rupees;
int Dollar;
printf("\n Enter the no. of dollars  ");
scanf("%d",&Dollar);
Dollar_Rupees(Dollar);



return 0;
}


/* 2 steps*/


void Dollar_Rupees(int Dollar)
{

  float Rupees = Dollar*74.99;
 
  printf("\n %d dollars = %2.2f rupees",Dollar,Rupees);
  }
 
  

