// Function with 2 params

#include<stdio.h>


void print_reverse(int a[10])
{
  int i;

     for(i = 9; i >= 0; i --)
         printf("%5d", a[i]);
}

void main()
{

  int a[10] = {1,4,5,66,23,44,55,66,22,33};

      print_reverse(a);
}
