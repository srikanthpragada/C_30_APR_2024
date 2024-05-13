// Take a number and display whether it is prime

#include <stdio.h>

void main()
{
 int i, num, prime = 1;

     printf("Enter number :");
     scanf("%d", &num);

     for(i = 2; i <= num/2; i ++)
     {
        if(num % i == 0) // found a factor
        {
            printf("Not a prime number!");
            prime = 0;
            break;
        }
     } // for

     if(prime)
          printf("Prime Number!");

} // main
