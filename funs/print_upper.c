#include<stdio.h>


void print_upper(char s[20])
{
  int i;

     for(i = 0; s[i] != '\0' ; i ++)
     {
        if(isupper(s[i]))
            putch(s[i]);
     }
}

void main()
{

  char s[] = "HeLLo";

      print_upper(s);
}
