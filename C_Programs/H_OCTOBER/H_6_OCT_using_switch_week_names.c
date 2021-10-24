#include<stdio.h>
#include<conio.h>
int main()
{
int i;
printf("\nselect any number");
scanf("%d",&i);
switch(i)
{
case 1: printf("\n the day is monday");
break;
case 2: printf("\n the day is tuesday"); 
break;
case 3: printf("\n the day is wednesday");
break;
case 4: printf("\n the day is thursday");
break;
case 5: printf("\n the day is friday");
break;
case 6: printf("\n the day is saturday");
break;
case 7: printf("\n the day is sunday");
break;
default: printf("number is not a day in week");
}
return 0;
}


