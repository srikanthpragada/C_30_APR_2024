#include<stdio.h>


void reverse(int n)
{
   printf("%d ", n);
   n --;
   if(n > 0)
      reverse(n);  // recursion
}

void main()
{
   reverse(5);
}
