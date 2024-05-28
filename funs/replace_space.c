#include<stdio.h>

void replace(char st[])
{
  int i;

     for(i = 0; st[i] != '\0' ; i++)
     {
          if(st[i] ==  ' ')
               st[i] = '-';
     }

}

void main()
{

  char st[] = "java javascript python";

     replace(st);
     puts(st);

}
