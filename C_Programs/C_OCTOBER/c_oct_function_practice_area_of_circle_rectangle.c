/*area of circle using function*/
#include<stdio.h>
float Area_cir(int,float);
int Area_rect(int ,int);
int main()
{
int radius,le,br,Ar;
float AC,Pi=3.14;
printf("\n enter the radius of circle");
scanf("%d",&radius);
AC=Area_cir(radius,Pi);
printf("\n the area of circle is=%.2f",AC);
printf("\n enter the length and breath of rectangle");
scanf("%d%d",&le,&br);
Ar=Area_rect(le,br);
printf("\n the area of rectangle is=%.2d",Ar);
return 0;
}
float Area_cir(int r,float pie)
{
return pie*r*r;
}
int Area_rect(int l,int b)
{
return l*b;
}


