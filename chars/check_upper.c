//  Take a char and display whether it is upper

#include <stdio.h>

void main()
{
  char ch;

     printf("Enter char :");
     ch = getchar();

     if(ch >= 65 && ch <= 90)
        printf("Upper");
     else
        printf("Not upper");
}
