// Pass by address/reference

#include <stdio.h>


void zero(int * n)  // pointer to take address
{
   *n = 0;
}

void main()
{
  int a = 100;

     zero(&a);  // pass address

     printf("%d ", a);
}
