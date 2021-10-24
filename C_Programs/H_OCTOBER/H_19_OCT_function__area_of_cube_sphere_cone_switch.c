/*area of cube,sphere,cone using function using switch options*/
#include<stdio.h>
int Area_Cube(int);
float Area_Sphere(int);
float Area_Cone(int,int);
int main()
{
int rs,rc,l,a,ACube;
float ACone,Pi=3.14,ASphere;
char shape;
printf("\n press c for area of cube, s for sphere and t for cone ");
shape=getchar();
switch(shape)
{
case 'c':
case 'C':
		printf("\n enter the value of a of cube ");
		scanf("%d",&a);
		ACube=Area_Cube(a);
		printf("\n the area of circle is=%d",ACube);
		break;
case 's':
case 'S':
		printf("\n enter the radius of sphere ");
		scanf("%d",&rs);
		ASphere=Area_Sphere(rs);
		printf("\n the area of sphere is=%.2f",ASphere);
		break;
case 't':
case 'T':
		printf("\n enter the radius and length of cone ");
		scanf("%d%d",&rc,&l);
		ACone=Area_Cone(rc,l);
		printf("\n the area of cone is=%.2f",ACone);
		break;
		default:
		printf("error key pressed");
		}
return 0;

}
int a,rs,rc,l;
float pie=3.14;
int Area_Cube(int a)
{
return 6*a*a;
}
float Area_Sphere(int rs)
{
return 4*pie*rs*rs;
}
float Area_Cone(int rc,int l)
{
return ((pie*rc*rc) + (pie*rc*l));
}


