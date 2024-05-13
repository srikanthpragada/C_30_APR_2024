// Take a number and display whether it is prime

#include <stdio.h>

void main()
{
 int i, num;

     printf("Enter number :");
     scanf("%d", &num);

     for(i = 2; i <= num/2; i ++)
     {
        if(num % i == 0)
        {
            printf("Not a prime number!");
            break;
        }
     } // for

     if( i > num/2)
          printf("Prime Number!");

} // main
