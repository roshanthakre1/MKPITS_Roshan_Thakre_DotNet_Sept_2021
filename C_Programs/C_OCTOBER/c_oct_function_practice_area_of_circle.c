/*area of circle using function*/
#include<stdio.h>
float Area(int,float);
int main()
{
int radius;
float A,Pi=3.14;
printf("\n enter the radius of circle");
scanf("%d",&radius);
A=Area(radius,Pi);
printf("\n the area of circle is=%.2f",A);
return 0;
}
float Area (int r,float pie)
{
return pie*r*r;
}

