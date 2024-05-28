#include<stdio.h>

void print(int a[], int len)
{
  int i;

     for(i = 0; i < len ; i ++)
     {
         printf("%5d", a[i]);
     }

}

void fill(int a[], int len)
{
  int i;

     srand(time(0));
     for(i = 0; i < len ; i ++)
     {
        a[i] = rand() % 100;
     }
}

void main()
{

 int a[5];
 int b[10];

      fill(a,5);
      fill(b,10);

      print(a,5);

}
