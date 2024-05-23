#include<stdio.h>


int isprime(int n)
{
 int i;

   for(i = 2; i <= n/2; i ++)
   {
       if (n % i == 0)
         return 0;  // not prime
   }

   return 1;  // prime
}

void main()
{
int n;


   if (isprime(17))
       printf("Prime!");

}
