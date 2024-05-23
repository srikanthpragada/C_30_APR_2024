// Function with 2 params

#include<stdio.h>

// user-defined function
void line(int len, char ch)
{
  int i;

     for(i = 1; i <= len; i ++)
         putch(ch);
}

void main()
{


     line(20, '*');  // call or invoke function
     printf("\nSrikanth Technologies\n");
     line(25, '.');  // call or invoke function

}
