// Take day and hours worked and display wage
#include <stdio.h>

void main()
{
 int day, hours, rate, wage;

   printf("Enter day [1-7] :");
   scanf("%d",&day);

   printf("Enter hours worked [1-24] :");
   scanf("%d",&hours);

   switch(day)
   {
       case 1:
       case 2:
       case 3: rate = 200; break;
       case 4:
       case 5: rate = 250; break;
       case 6: rate = 300; break;
       case 7: rate = 400;
   }

   if(hours - 8 > 0)
   {
       wage = 8 * rate +  (hours - 8) * rate * 1.1;
   }
   else
   {
       wage = hours * rate;
   }

   printf("Wage = %d", wage);

}
