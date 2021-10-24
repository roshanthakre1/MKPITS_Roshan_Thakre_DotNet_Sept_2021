#include<stdio.h>
int main()
{
int gram,kilograms;
printf("\n enter the weight in grams");
scanf("%f",&gram);
kilograms=grams/1000;
  grams=grams%1000;
printf("%d kg %d gm ",kilograms,grams);
return 0;
}
