#include<stdio.h>
#include<conio.h>
int main()
{
int i;
printf("\nselect any number");
scanf("%d",&i);
switch(i)
{
case 1: printf("\n month is january");
break;
case 2: printf("\nit is a february month");
break;
case 3: printf("\nit is a march month");
break;
case 4: printf("\nit is a april month");
break;
case 5: printf("\nit is a may month");
break;
case 6: printf("\nit is a june");
break;
case 7: printf("\nit is a july");
break;
case 8: printf("\nit is a august");
break;
case 9: printf("\nit is a september");
break;
case 10: printf("\nit is a october");
break;
case 11: printf("\nit is a november month");
break;
case 12: printf("\nit is a december month");
break;
default: printf("number is not month of year");
}
return 0;
}


