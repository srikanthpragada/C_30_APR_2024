// Take month number and display number of days
#include <stdio.h>

void main()
{
 int month;

   printf("Enter month [1-12] :");
   scanf("%d",&month);

   switch(month)
   {
       case 2: printf("28"); break;
       case 4:
       case 6:
       case 9:
       case 11: printf("30"); break;
       default: printf("31");
   }


}
