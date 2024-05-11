// Print factors of a number

#include <stdio.h>

void main()
{
 int i, num, found = 0; // flag

     printf("Enter number :");
     scanf("%d", &num);

     for(i = 2; i <= num/2; i ++)
     {
        if(num % i == 0)
        {
             printf("%d ", i);
             found = 1;
        } // if
     } // for

     if (found == 0)
        printf("It is a prime number!");

} // main
