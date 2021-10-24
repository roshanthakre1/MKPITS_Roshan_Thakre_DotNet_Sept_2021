#include<stdio.h>
/* function Wap to covert miles to kilometer */
/*step 1: declaration of prototype*/

 void Miles_Km(int);
int main()
{
float Km;
int miles;
printf("\n Enter the no. of miles");
scanf("%d",&miles);
Miles_Km(miles);



return 0;
}


/* 2 steps*/


void Miles_Km(int miles)
{

  float Km= miles*1.61;
 
  printf("\n %d miles = %2.2f kilometer",miles,Km);
  }
 
  

