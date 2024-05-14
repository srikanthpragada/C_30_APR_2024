// Print largest factor

#include <stdio.h>

void main()
{
 int i, num;

     printf("Enter number :");
     scanf("%d", &num);

     for(i = num/2; i >= 1; i --)
     {
        if(num % i == 0)
        {
            printf("Largest Factor : %d", i);
            break;
        }
     } // for
} // main
