// Take a number and display in reverse order

#include <stdio.h>

void main()
{
 int num, digit;

     printf("Enter number :");
     scanf("%d", &num);

     while(num > 0)
     {

         digit = num % 10;  // take rightmost digit
         printf("%d", digit);
         num = num / 10;    // remove rightmost digit
     }

} // main
