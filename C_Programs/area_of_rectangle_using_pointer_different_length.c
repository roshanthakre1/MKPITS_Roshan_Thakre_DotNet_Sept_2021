#include<stdio.h>
float arearectangle(int ,int)
float areacircle(int ,float);
float areatriangle(int ,int);
int main()
{
int length=40,breath=20;
float A,pie=3.142;
for(i=0;i<3;i++)
{
printf("\n enter the radius");
scanf("%d",&radius);
A=areacircle(radius,pie);
printf("\narea of circle=%6.5d and ",A);
printf("\narea of rectangle=%6.5d and ",A);
printf("\narea of triangle=%6.5d and ",A);
}
{
return 0;
}
float arearectangle(int r,int p)
{
return p*r*r;
}
{
return l*b;
}
float areatriangle(int b ,int h)
}
return 0.5*b*h;


