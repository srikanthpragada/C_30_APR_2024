#include<stdio.h>


void print_reverse(char s[20])
{
  int i;

     for(i = strlen(s) - 1; i >= 0; i --)
         putch(s[i]);
}

void main()
{

  char s[] = "Hello";

      print_reverse(s);
}
