#include<stdio.h>
#include<conio.h>
int main()
{
		int number,sum=0;
		printf("\nenter a number and press 0 to stop ");
		Input:scanf("%d",&number);
		if(number==0)
		goto End;
		else
		{
		sum+=number;
		goto Input;
		}
		End: printf("\n sum=%d",sum);
		return 0;
		}

