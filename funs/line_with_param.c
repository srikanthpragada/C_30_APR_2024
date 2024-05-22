// Take names and display average length

#include<stdio.h>

// user-defined function
void line(int len)
{
  int i;

     for(i = 1; i <= len; i ++)
         putch('-');
}

void main()
{


     line(20);  // call or invoke function
     printf("\nSrikanth Technologies\n");
     line(25);  // call or invoke function

}
