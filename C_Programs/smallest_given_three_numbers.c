#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter the value of a and b and c  ");
scanf("%d%d%d",&a,&b,&c);
if(a<b&&a<c)
{
printf("%d is a smallest number",a);
}
else if(b<c)
{
printf("%d is a smallest number",b);
}
else{printf("%d is a smallest number",c);
 }

return 0;
}

