/*C program to print square, cube and square root of all numbers from 1 to N*/

#include <stdio.h>
#include <math.h>

int main()

  {  int i,n;
  

    printf("Enter the value of N: ");
    scanf("%d",&n);

    printf("\nNo     Square   Cube    Square Root cuberoot\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d \t %ld \t %ld \t %.2f %.2f\n",i,(i*i),(i*i*i),sqrt((double)i),pow((double)i,0.333));
    }
    
    return 0;
}

