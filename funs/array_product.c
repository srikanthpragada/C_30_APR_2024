#include<stdio.h>


void product(int a1[5], int a2[5])
{
  int i;

     for(i = 0; i < 5 ; i ++)
     {
        printf("%5d",  a1[i]  * a2[i]);
     }
}

void main()
{

 int a[] = {1,3,4,5,6};
 int b[] = {10,22,3,4,5};

      product(a,b);
}
