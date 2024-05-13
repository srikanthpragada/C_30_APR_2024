// Take a number and display sum of digits

#include <stdio.h>

void main()
{
 int num, digit, sum = 0;

     printf("Enter number :");
     scanf("%d", &num);

     while(num > 0)
     {
         digit = num % 10;  // take rightmost digit
         sum  += digit;
         num = num / 10;    // remove rightmost digit
     }

     printf("Sum of digits : %d", sum);

} // main
