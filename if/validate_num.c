// Take a number and check whether it is between 1 and 100
#include <stdio.h>

void main()
{
 int num;

   printf("Enter number :");
   scanf("%d",&num);

   if(num >= 1 && num <= 100)
      printf("Valid");
   else
      printf("Invalid");

}
