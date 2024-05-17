// Validate Password

#include<stdio.h>
void main()
{
 char ch, i, upper = 0 , digit = 0;

   printf("Enter Password : ");
   for(i = 1; i <= 8; i ++)
   {
    ch = getch();

    if(isdigit(ch))
       digit = 1;
    else
       if(isupper(ch))
         upper = 1;

    putch('*');
   }

   if(digit == 1 && upper == 1)
     printf("\nValid Password!");
   else
     printf("\nInvalid Password!");
}
