#include<stdio.h>
void Kg_Gram(int);

int main()
{
	int r;
  printf("\n enter weight in grams");
  scanf("%d",&r);
  Kg_Gram(r);
  return 0;
  }
 

 void Kg_Gram(int ra)
  
  {
  float A=ra/1000;
  grams=grams%1000;
  printf("\n the area of circle is=%2f",A,grams);
  
  }

