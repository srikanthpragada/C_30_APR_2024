// Take day and hours worked and display wage
#include <stdio.h>

void main()
{
 int day, hours, wage;

   printf("Enter day [1-7] :");
   scanf("%d",&day);

   printf("Enter hours worked [1-24] :");
   scanf("%d",&hours);

   switch(day)
   {
       case 1:
       case 2:
       case 3: wage = hours * 200; break;
       case 4:
       case 5: wage = hours * 250; break;
       case 6: wage = hours * 300; break;
       case 7: wage = hours * 400;
   }

   printf("Wage = %d", wage);

}
