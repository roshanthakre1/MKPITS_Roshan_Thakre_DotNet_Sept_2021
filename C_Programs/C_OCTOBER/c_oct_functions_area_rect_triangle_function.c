#include<stdio.h>
/*No input to UDF bugives O/P*/
float Area_Circle();
int Area_Rect();
float Area_Tri();

int main()
{
float AC;
int AR;
float AT;
AC=Area_Circle();
printf("\n area of circle=%2f",AC);
AR=Area_Rect();
printf("\n area of Rectangle=%2d",AR);
AT=Area_Tri();
printf("\n area of Triangle=%2f",AT);
return 0;
}

  float Area_Circle()
  
  {int r;
  printf("\n enter radius of circle");
  scanf("%d",&r);
  return 3.14*r*r;
  }
  int Area_Rect()
 {int l,b;
   printf("\n enter length and breath of rectangle");
  scanf("%d%d",&l,&b);

return l*b;
}
 float Area_Tri()
  
  {
  int ba,h;
  printf("\n enter base and height of triangle");
  scanf("%d%d",&ba,&h);
  return 0.5*ba*h;
  }

