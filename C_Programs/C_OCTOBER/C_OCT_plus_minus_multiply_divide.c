#include<stdio.h>
#include<conio.h>
int main()
{
		char opt;
		int a,b,result;
		printf("\nenter two numbers ");
		scanf("%d%d",&a,&b);
		fflush(stdin);
		printf("\npress + for addition\n press -for susbtrsction");
		printf("\n press xfor multiplication\n press /for division ");
		opt=getchar();
		switch(opt){
		case '+':result=a+b;
		printf("\n %d+%d=%d",a,b,result);
		break;
		case '-':result=a-b;
		printf("\n %d-%d=%d",a,b,result);
		break;
		case 'x':
		case 'X':result=a*b;
		printf("\n %d*%d=%d",a,b,result);
		break;
		case '/':result=a/b;
		printf("\n %d/%d=%d");
		break;

		default: printf("\ninvalid key press or not a rainbow colour");
		}
		return 0;
		}


