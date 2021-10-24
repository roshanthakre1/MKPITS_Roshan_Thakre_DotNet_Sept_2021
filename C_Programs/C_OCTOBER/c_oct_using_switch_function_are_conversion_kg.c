#include<stdio.h>
/* function type3 area of circle and rectangle and triangle  */
/*step 1: declaration of prototype*/
void Kg_Gram(int);

int main()
{

Kg_Gram(5620);

return 0;
}


/* 2 steps*/

void Kg_Gram(int gm)
{
int kg=gm/1000;
gm=gm%1000;
printf("\n gram converted %d kg and %d gm ",kg,gm);
}

