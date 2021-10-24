#include<stdio.h>
/*No input to UDF bugives O/P*/
float Area_Circle();
int Area_Rect();

int main()
{
float AC;
int AR;
AC=Area_Circle();
printf("\n area of circle=%2f",AC);
AR=Area_Rect();
printf("\n area of Rectangle=%2d",AR);
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

