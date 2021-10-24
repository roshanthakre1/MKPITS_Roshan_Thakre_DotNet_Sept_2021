area of circle using function*/
#include<stdio.h>
float Area_cir(int,float);
int Area_rect(int ,int);
float Area_tri(int,int);
int main()
{
int radius,le,br,Ar,he,ba;
float AC,Pi=3.14,At;
char shape;
printf("\n press c for area of circle, r for rectangle and t for triangle");
shape=getchar();
switch(shape)
{
case 'c':
case 'C':
		printf("\n enter the radius of circle");
		scanf("%d",&radius);
		AC=Area_cir(radius,Pi);
		printf("\n the area of circle is=%.2f",AC);
		break;
case 'r':
case 'R':
		printf("\n enter the length and breath of rectangle");
		scanf("%d%d",&le,&br);
		Ar=Area_rect(le,br);
		printf("\n the area of rectangle is=%.2d",Ar);
		break;
case 't':
case 'T':
		printf("\n enter the base and breath of height");
		scanf("%d%d",&he,&ba);
		Ar=Area_tri(he,ba);
		printf("\n the area of rectangle is=%.2f",At);
		break;
return 0;
}
}
float Area_cir(int r,float pie)
{
return pie*r*r;
}
int Area_rect(int l,int b)
{
return l*b;
}
float Area_tri(int h,int base)
{
return 0.5*h*base;
}


