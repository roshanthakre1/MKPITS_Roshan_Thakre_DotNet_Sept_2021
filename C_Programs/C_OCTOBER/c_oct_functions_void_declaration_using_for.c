#include<stdio.h>
void Area_Circle(int);

int main()
{
	int n,i,r;
  printf("\n how many times u want to find area of circle");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
  printf("\n enter the radius of the circle");
  scanf("%d",&r);
  Area_Circle(r);
  }
  return 0;
  }
 

 void Area_Circle(int ra)
  
  {
  float A=3.14*ra*ra;
  printf("\n the area of circle is=%2f",A);
  
  }

