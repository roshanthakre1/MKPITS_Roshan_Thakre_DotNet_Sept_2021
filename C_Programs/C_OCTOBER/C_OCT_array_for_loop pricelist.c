/*write a program to display prime number*/
#include<stdio.h>
int main()

  {  
  float price[5],amount[5],bill=0.0;
  int i,qty[5];
  for(i=0;i<5;i++)
  {
  Printf("\nenter price ");
  scanf("%f",&price[i]);
  printf("\n how much purchased ");
  scanf("%d",&qty[i]);
  amount[i]=price[i]*qty[i];
  }
  printf("\n items\nprice\nqty\namount\n");
	for(i=0;i<5;i++)
	{j=i+1;
	printf("%4f%5d%6f%f",j,price[i],qty[i],amount[i]);
	bill+=amount[i]
	}
	printf("\n total bill rs./%4.2f",bill);
    return 0;
}

