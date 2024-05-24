#include<stdio.h>

int g = 1;  // Global Variable


void main()
{
  int a = 100;

     printf("%d ", a);
}

void fun()
{
  int b = 1000;
  int g = 10;

     printf("%d  %d", b, g);

}


