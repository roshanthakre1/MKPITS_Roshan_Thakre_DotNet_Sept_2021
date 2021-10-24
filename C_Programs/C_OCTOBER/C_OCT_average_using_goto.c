#include<stdio.h>
#include<conio.h>
int main()
{
		int number,sum=0;
		float avg,i=0;
		Input:printf("\nenter a number and press 0 to stop ");
		scanf("%d",&number);
		if(number==0)
		goto End;
		else
		{
		sum+=number;
		i++;
		goto Input;
		}
		End:avg=sum/i;
		 printf("\n sum=%f",sum/i);
		return 0;
		}

