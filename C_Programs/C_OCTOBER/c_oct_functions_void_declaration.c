#include<stdio.h>
void Area_Circle(int);

int main()
{
	int r;
  printf("\n enter radius of circle");
  scanf("%d",&r);
  Area_Circle(r);
  return 0;
  }
 

 void Area_Circle(int ra)
  
  {
  float A=3.14*ra*ra;
  printf("\n the area of circle is=%2f",A);
  
  }

