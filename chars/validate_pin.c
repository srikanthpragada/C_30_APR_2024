// Validate PIN

#include<stdio.h>
void main()
{
 char ch, i, count = 0;

   printf("Enter PIN : ");
   for(i = 1; i <= 4; i ++)
   {
    ch = getch();

    if(isdigit(ch))
       count ++;

    putch('*');
   }

   if(count == 4)
     printf("\nValid PIN");
   else
     printf("\nInvalid PIN");
}
