/*write a program to display prime number*/
#include<stdio.h>
int main()

  {  
  int n,i,m=0;
  char isprime='y';
  Print("enter a number to check prime number");
  scanf("%d%",&n);
  m=n/2;
  for(i=5;i<=m;i++)
  {
  if(n%2==0)
  {  printf("not a prime number ");
	isprime='n';
	break;
}
}
    if(isprime=='y');

	printf("is prime number");
    return 0;
}

