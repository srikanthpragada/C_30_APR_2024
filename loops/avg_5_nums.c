// Take 5 numbers and display average

#include <stdio.h>

void main()
{
 int i, num, total = 0;


     for(i = 1; i <= 5; i ++)
     {
       printf("Enter number :");
       scanf("%d", &num);
       total += num;
     } // for


     printf("Average = %d", total / 5);

} // main
