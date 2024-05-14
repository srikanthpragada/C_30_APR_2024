// Print avg of positive numbers

#include <stdio.h>

void main()
{
 int count = 0, total = 0, num;

     while(1)
     {
        printf("Enter number :");
        scanf("%d", &num);

        if(num == 0)
            break;   // terminate loop

        if(num < 0)
            continue;  // start next iteration

        total += num;
        count ++;
     }

     printf("Average = %d", total / count);

} // main
