#include<stdio.h>

void fill(int a[], int len)
{

}

void print(int a[], int len)
{
  int i;

     for(i = 0; i < len ; i ++)
     {
         printf("%5d", a[i]);
     }

}

void main()
{

  int a [] = {1,3,4,5,6,7,4,3,2,1};
  int b [] = {1,3,4,5,6};

      print(a, 10);
      printf("\n");
      print(b, 5);

}
