// Create an array of 5 X 5 and store values into it and display it

#include<stdio.h>

void main()
{
  int a[6][4], r, c;


    srand(time(0)); // set seed

    for(r = 0; r < 6; r ++)
    {
       for(c = 0; c < 4; c++)
       {
        a[r][c] = rand() % 100;
        printf("%5d", a[r][c]);
       }
       printf("\n");
    }

}
