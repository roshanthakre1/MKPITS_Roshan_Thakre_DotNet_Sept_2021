#include<stdio.h>
float areacircle(int ,float);
int main()
{
int radius;
float A,pie=3.14;
printf("\n enter radius of circle");
scanf("%d",&radius);
A=areacircle(radius,pie);
printf("\narea of circle=%6.5f and radius=%d",A,radius);
return 0;
}
float areacircle(int r,float p)
{
return p*r*r;
}

