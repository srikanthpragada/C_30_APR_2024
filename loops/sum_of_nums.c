// Print sum of 10 numbers or until 0 is given

#include <stdio.h>

void main()
{
 int i, num;

     for(i = 1; i <= 10; i ++)
     {
        printf("Enter number [0 to stop] :");
        scanf("%d", &num);

        if(num == 0)
            break;  // terminate loop

     } // for

     printf("The End!");

} // main
