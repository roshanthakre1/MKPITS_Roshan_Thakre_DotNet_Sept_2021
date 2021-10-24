/*Wap multiplication table using while loop*/
#include<stdio.h>
#include<conio.h>
int main()
{
char Name[10];
int i,vowels=0;
printf("Enter your name\n");
for(i=0;i<6;i++)
{
Name[i]=getchar();
}
for(i=0;i<6;i++)
{
printf("%c",Name[i]);
if(Name[i]=='a' || Name[i]=='A'|| Name[i]=='e' || Name[i]=='E'|| Name[i]=='i' || Name[i]=='I'|| Name[i]=='O' || Name[i]=='o'||Name[i]=='u' || Name[i]=='U')
vowels++;
}
return 0;
}



