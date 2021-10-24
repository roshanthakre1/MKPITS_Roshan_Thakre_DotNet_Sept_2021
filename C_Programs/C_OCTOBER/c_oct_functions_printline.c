#include<stdio.h>
/*No input to UDF bugives O/P*/
float Area_Circle();

int main()
{
float A;
A=Area_Circle();
printf("\n area of circle=%2f",A);
return 0;
}

  float Area_Circle()
  {int r;
 
  printf("\n enter radius of circle");
  scanf("%d",&r);


return 3.14*r*r;
}

