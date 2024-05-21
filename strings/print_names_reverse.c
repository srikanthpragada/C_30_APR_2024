// Take 5 names and display them in reverse order
#include<stdio.h>

void main()
{
  char names[5][30];
  int i;

     for(i = 0; i < 5; i ++)
     {
       printf("Enter name :");
       gets(names[i]);
     }

     for(i = 0; i < 5; i ++)
     {
       puts(strrev(names[i]));
     }

}
