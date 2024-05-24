#include<stdio.h>


int sum(int a[5])
{
 int i, total = 0;

   for(i = 0; i < 5; i ++)
   {
       total += a[i];
   }

   return total;
}

void main()
{
  int a[] = {3,4,53,24,55};


     printf("Total = %d", sum(a));
}
