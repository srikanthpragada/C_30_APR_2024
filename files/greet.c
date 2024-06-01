// Take name on command-line and greet user

#include<stdio.h>


void main(int argc, char * argv[])
{
  if(argc > 1)
     printf("Hello %s", argv[1]);
  else
     printf("Name is missing!");

}
