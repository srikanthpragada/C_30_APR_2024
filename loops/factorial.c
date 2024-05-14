// Take a number and display factorial

#include <stdio.h>

void main()
{
 int i, num;
 unsigned int fact = 1;

     printf("Enter number :");
     scanf("%d", &num);

     for(i = 1; i <= num; i ++)
     {
        fact = fact * i;
     } // for

     printf("Factorial : %d", fact);

} // main
