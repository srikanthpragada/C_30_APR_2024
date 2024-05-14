// Print whether a number is perfect

#include <stdio.h>

void main()
{
 int i, num, total = 1;

     printf("Enter number :");
     scanf("%d", &num);

     for(i = 2; i <= num/2; i ++)
     {
        if(num % i == 0)
            total += i;

     } // for

     if (total == num)
        printf("It is a perfect number!");
     else
        printf("Not a perfect number!");

} // main
