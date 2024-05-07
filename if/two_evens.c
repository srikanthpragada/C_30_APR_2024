// Take two numbers and display whether they are even numbers
#include <stdio.h>

void main()
{
 int a, b;

   printf("Enter two numbers :");
   scanf("%d%d",&a,&b);

   if(a % 2 == 0 && b % 2 == 0)
   {
      printf("Both are even");
   }
   else
     if(a % 2 == 0 || b % 2 == 0)
     {
        printf("One is even");
     }
     else
     {
        printf("None is even");
     }

}
