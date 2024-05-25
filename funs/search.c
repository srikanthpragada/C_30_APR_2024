#include<stdio.h>


int search(int a[10], int v)
{
  int i;

     for(i = 0; i < 10 ; i ++)
     {
        if(a[i] == v)
           return i;
     }

     return -1; // not found
}

void main()
{

  int a [] = {1,3,4,5,6,7,4,3,2,1,44};


       printf("%d ", search(a, 6));
       printf("%d ", search(a, 10));
}
