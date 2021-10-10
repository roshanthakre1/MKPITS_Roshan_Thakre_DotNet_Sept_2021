#include<stdio.h>
int main()
{
int sec,min,hr;
printf("\n enter the value of time in seconds  ");
scanf("%d",&sec);
hr=sec/3600;
min=(sec-hr*3600)/60;
sec=(sec-(hr*3600)-(min*60));

printf("%5.2dhrs %dmin %dsec",hr,min,sec);
return 0;
}

