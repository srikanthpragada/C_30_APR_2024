// Take two numbers and display relationship
#include <stdio.h>

void main()
{
 int a, b;

   printf("Enter two numbers :");
   scanf("%d%d",&a,&b);

   if(a > b)
      printf("First > Second");
   else
     if(b > a)
        printf("Second > First");
     else
        printf("Both are equal");

}
