// Take a number and display whether it is even or odd
#include <stdio.h>

void main()
{
 int num;

   printf("Enter a number :");
   scanf("%d",&num);

   if(num % 2 == 0)
     printf("Even");
   else
     printf("Odd");
}
