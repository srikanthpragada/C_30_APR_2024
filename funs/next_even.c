#include<stdio.h>


int next_even(int n)
{
   if(n % 2 == 0)
      return n + 2;
   else
      return n + 1;
}

void main()
{
int n;

   n = next_even(10);
   printf("%d ", n);
   n = next_even(15);
   printf("%d ", n);
}
