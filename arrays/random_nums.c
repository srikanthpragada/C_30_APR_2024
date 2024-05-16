// Create an array and store values into it and display it in reverse

#include<stdio.h>
void main()
{
  int a[5], i;


    srand(time(0)); // set seed

    for(i = 0; i < 5; i ++)
    {
        a[i] = rand() % 100;
        printf("%d\n", a[i]);
    }

}
