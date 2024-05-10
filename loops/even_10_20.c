// Print even numbers from 10 to 20

#include <stdio.h>

void main()
{
 int i;

     /*
     for(i = 10; i <= 20; i ++)
     {
         if(i % 2 == 0)
            printf("%d ", i);
     }
     */

     for(i = 10; i <= 20; i += 2)
     {
        printf("%d ", i);
     }
}
