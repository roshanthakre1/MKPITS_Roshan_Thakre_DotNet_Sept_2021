#include<stdio.h>
/* function Wap to covert dollar to rupees */
/*step 1: declaration of prototype*/

void Rupees_Dollar(int);
int main()
{
float Dollar;
int Rupees;
printf("\n Enter the no. of Rupees  ");
scanf("%d",&Rupees);
Rupees_Dollar(Rupees);



return 0;
}


/* 2 steps*/


void Rupees_Dollar(int Rupees)
{

  float Dollar = Rupees*0.013;
 
  printf("\n %d Rupees = %.3f dollars",Rupees,Dollar);
  }
 
  

